/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:21:23 by ocgraf            #+#    #+#             */
/*   Updated: 2025/05/27 11:16:53 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int	un_nb;

	if (nb < 0)
	{
		ft_putchar('-');
		un_nb = -nb;
	}
	else
		un_nb = nb;
	if (un_nb >= 10)
	{
		ft_putnbr(un_nb / 10);
		un_nb %= 10;
	}
	if (un_nb < 10)
		ft_putchar(un_nb + '0');
}
