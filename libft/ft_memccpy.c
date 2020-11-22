/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwinston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:27:46 by fwinston          #+#    #+#             */
/*   Updated: 2020/11/16 01:10:50 by fwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char *ptr;
	unsigned char *sptr;

	ptr = (unsigned char *)dest;
	sptr = (unsigned char *)src;
	while (len--)
	{
		*ptr = *sptr;
		if (*sptr == (unsigned char)c)
			return ((void*)(ptr + 1));
		sptr++;
		ptr++;
	}
	return (NULL);
}
