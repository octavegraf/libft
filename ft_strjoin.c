/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:59:47 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/13 11:59:56 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	size_tabtab(int size, char **strs)
{
	int				i;
	int				j;
	unsigned int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			count++;
		}
		i++;
	}
	return (count);
}

unsigned int	size_sep(char *sep)
{
	unsigned int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

char	*add_sep(char *result, char *sep, unsigned int count)
{
	unsigned int	j;

	j = 0;
	while (sep[j])
	{
		result[count] = sep[j];
		j++;
		count++;
	}
	return (result);
}


char	*join_copy(int size, char **strs, char *sep, char *result)
{
	int				i;
	unsigned int	j;
	unsigned int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			result[count] = strs[i][j];
			j++;
			count++;
		}
		j = 0;
		if (i < size - 1)
		{
			result = add_sep(result, sep, count);
			count += size_sep(sep);
		}
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char			*result;
	unsigned int	size_strs_sep;

	if (size <= 0)
		return (0);
	size_strs_sep = size_tabtab(size, strs) + (size_sep(sep) * (size - 1));
	result = malloc(sizeof(char) * (size_strs_sep + 1));
	if (!result)
		return (0);
	result = join_copy(size, strs, sep, result);
	return (result);
}