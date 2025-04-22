/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 10:35:16 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/29 09:22:26 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	detect_overflow(size_t count, size_t size)
{
	if (size > 0 && count > INT_MAX / size)
	{
		return (1);
	}
	if (size < 0 && count < INT_MAX / size)
	{
		return (1);
	}
	if ((size < 0 && size < INT_MIN / count)
		|| (size > 0 && count < INT_MIN / size))
	{
		return (1);
	}
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (detect_overflow(count, size) == 1)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
