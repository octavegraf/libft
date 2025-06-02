/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 15:38:44 by ocgraf            #+#    #+#             */
/*   Updated: 2025/06/02 15:02:17 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen_base(unsigned long long int nb, char *base)
{
	size_t				i;
	size_t				base_len;

	i = 1;
	base_len = ft_strlen(base);
	while (nb >= base_len)
	{
		nb /= base_len;
		i++;
	}
	return (i);
}
