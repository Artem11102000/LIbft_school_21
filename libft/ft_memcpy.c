/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwinston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:11:45 by fwinston          #+#    #+#             */
/*   Updated: 2020/11/16 01:10:29 by fwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char *ptr;
	unsigned char *sptr;

	if (len <= 0 || dest == src)
		return (dest);
	ptr = (unsigned char *)dest;
	sptr = (unsigned char *)src;
	while (len--)
	{
		*ptr = *sptr;
		sptr++;
		ptr++;
	}
	return (dest);
}
