/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 15:38:44 by ocgraf            #+#    #+#             */
/*   Updated: 2025/05/27 09:57:09 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen_base(int nb, char *base)
{
	size_t				i;
	size_t				base_len;
	unsigned long int	ul_long_nb;

	i = 0;
	base_len = ft_strlen(base);
	if (nb == 0)
		return (1);
	if (nb < 0)
		ul_long_nb = (unsigned long int)-nb;
	else
		ul_long_nb = nb;
	while (ul_long_nb > base_len)
	{
		ul_long_nb /= base_len;
		i++;
	}
	return (i);
}
