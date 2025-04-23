/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:11:15 by ocgraf            #+#    #+#             */
/*   Updated: 2025/04/22 17:57:54 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	const char		*str;

	if (n == 0)
		return (NULL);
	i = 0;
	uc = (unsigned char)c;
	str = s;
	while (str[i] && i < n)
	{
		if (str[i] == uc)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (NULL);
}
