/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwinston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 23:18:44 by fwinston          #+#    #+#             */
/*   Updated: 2020/11/16 01:13:57 by fwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int		ft_len(char const *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static void		*leak(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char		**ft_job(char const *s, int count, char c, char **str)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		len = ft_len(s, c);
		if (!(str[i] = (char *)malloc(sizeof(char) * (len + 1))))
			return (leak(str, i));
		j = 0;
		while (j < len)
			str[i][j++] = *s++;
		str[i][j] = '\0';
		i++;
	}
	str[i] = NULL;
	return (str);
}

char			**ft_split(char const *s, char c)
{
	char	**str;
	int		count;

	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	if (!s)
		return (NULL);
	if (!(str = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	str = ft_job(s, count, c, str);
	return (str);
}
