/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:49:40 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/11 13:01:38 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[--i] == c)
			return (&str[i]);
	}
	return (NULL);
}
