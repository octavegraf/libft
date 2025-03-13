/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:59:47 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/13 12:18:42 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s1s2;
	size_t	size;
	size_t	i;

	size = ft_strlen(s1) + ft_strlen(s2);
	s1s2 = malloc((size + 1) * sizeof(char));
	if (!s1s2)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		s1s2[i] = s1[i];
		i++;
	}
	while ((i - ft_strlen(s1)) < ft_strlen(s2))
	{
		s1s2[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	s1s2[i] = '\0';
	return (s1s2);
}
