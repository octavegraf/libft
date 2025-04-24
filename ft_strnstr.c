/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 09:00:29 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/31 16:11:35 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while (needle[i])
	{
		if (i >= len || needle[i] != haystack[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (i + ft_strlen(needle) > len)
			return (NULL);
		if (ft_check(&haystack[i], needle, len - i))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
