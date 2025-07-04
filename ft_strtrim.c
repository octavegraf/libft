/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:21:27 by ocgraf            #+#    #+#             */
/*   Updated: 2025/07/01 10:49:49 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_charset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*trim;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while ((is_in_charset(s1[i], set) == 1) && s1[i])
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while ((is_in_charset(s1[i], set) == 1) && i > start)
		i--;
	end = i + 1;
	trim = (char *)ft_calloc((end - start) + 1, sizeof(char));
	if (!trim)
		return (NULL);
	i = -1;
	while (++i < (end - start))
		trim[i] = s1[start + i];
	trim[i] = '\0';
	return (trim);
}
