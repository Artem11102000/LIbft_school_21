/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwinston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 00:15:47 by fwinston          #+#    #+#             */
/*   Updated: 2020/11/16 19:10:15 by fwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*sptr;
	size_t			i;

	ptr = (unsigned char *)dest;
	sptr = (unsigned char *)src;
	if (!ptr && !sptr)
		return (NULL);
	i = 0;
	if (ptr <= sptr)
		while (len--)
		{
			*ptr = *sptr;
			sptr++;
			ptr++;
		}
	else
	{
		while (i++ < len)
			ptr[len - i] = sptr[len - i];
	}
	return (dest);
}
