/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 09:34:10 by ocgraf            #+#    #+#             */
/*   Updated: 2025/05/27 09:35:07 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_error(char *base, unsigned long int base_long)
{
	unsigned long int	i;
	unsigned long int	j;

	i = 0;
	if (base_long <= 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+'
				|| base[i] == '-' || base[i] == ' '
				|| (base[i] >= 7 && base[i] <= 13))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned long int	nbr_long;
	unsigned long int	base_long;

	base_long = ft_strlen(base);
	if (ft_check_error(base, base_long) == 0)
		return ;
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr_long = (unsigned long int)(-nbr);
	}
	else
		nbr_long = nbr;
	if (nbr_long >= base_long)
		ft_putnbr_base(nbr_long / base_long, base);
	ft_putchar(base[nbr_long % base_long]);
}
