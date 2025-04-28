/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:03:44 by ocgraf            #+#    #+#             */
/*   Updated: 2025/04/28 17:56:09 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	char	ch;
	int		i;

	str = b;
	ch = c;
	i = 0;
	while (len > 0)
	{
		str[i] = ch;
		i++;
		len--;
	}
	return (b);
}
