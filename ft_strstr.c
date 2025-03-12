/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:00:29 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/12 09:37:27 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(const char *haystack, const char *needle)
{
	int	i;

	i = 0;
	while (needle[i])
	{
		if (needle[i] != haystack[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;

	if (!needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		if (ft_check(&haystack[i], needle) == 1)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
