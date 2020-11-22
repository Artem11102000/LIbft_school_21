/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwinston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 00:38:35 by fwinston          #+#    #+#             */
/*   Updated: 2020/11/16 00:25:17 by fwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t len)
{
	size_t	count_dest;
	size_t	count_src;

	count_dest = 0;
	count_src = 0;
	if (len == 0)
		return (ft_strlen(src));
	while (dest[count_dest] && count_dest < len)
		count_dest++;
	while (src[count_src] && (count_dest + count_src) < (len - 1))
	{
		dest[count_dest + count_src] = src[count_src];
		count_src++;
	}
	if (count_dest < len)
		dest[count_dest + count_src] = '\0';
	return (count_dest + ft_strlen(src));
}
