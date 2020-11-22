/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwinston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:01:10 by fwinston          #+#    #+#             */
/*   Updated: 2020/11/16 00:16:54 by fwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char*)dest;
	while (len--)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (dest);
}
