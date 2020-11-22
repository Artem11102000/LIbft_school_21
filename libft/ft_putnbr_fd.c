/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwinston <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 02:01:24 by fwinston          #+#    #+#             */
/*   Updated: 2020/11/16 01:08:44 by fwinston         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	chislo;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		chislo = (unsigned int)(nb * -1);
	}
	else
		chislo = (unsigned int)nb;
	if (chislo >= 10)
		ft_putnbr_fd(chislo / 10, fd);
	ft_putchar_fd((char)(chislo % 10 + 48), fd);
}
