/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwinston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 01:09:37 by fwinston          #+#    #+#             */
/*   Updated: 2020/11/14 02:20:12 by fwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isnegative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char		*ft_job(int len, char *str, int n, int minus)
{
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (minus)
		str[0] = '-';
	return (str);
}

char		*ft_itoa(int n)
{
	int		count;
	int		len;
	int		minus;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = n;
	minus = 0;
	len = 0;
	if (ft_isnegative(n))
	{
		minus = 1;
		n = n * (-1);
	}
	while ((count /= 10) != 0)
		len++;
	len = minus + 2 + len;
	if ((str = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	str[--len] = '\0';
	str = ft_job(len, str, n, minus);
	return (str);
}
