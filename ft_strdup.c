/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:45:52 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/12 14:00:28 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	size;
	char	*dest;

	i = 0;
	size = ft_strlen(s1);
	dest = malloc((size + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < size + 1)
	{
		dest[i] = s1[i];
		i++;
	}
	return (dest);
}
