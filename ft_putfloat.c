/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:21:23 by ocgraf            #+#    #+#             */
/*   Updated: 2025/05/24 22:24:13 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putfloat(float nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putfloat(nb / 10);
		nb %= 10;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	nb /= 10;
	if (nb)
		ft_putchar('.')
	while (nb && nb < 1)
	{
		nb *= 10;
		ft_putchar(nb + '0');
		nb /= 100;
	}
}
