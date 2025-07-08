/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_add_row.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:01:36 by ocgraf            #+#    #+#             */
/*   Updated: 2025/07/08 12:23:21 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	double_free(char **to_free)
{
	int	i;

	i = -1;
	if (!to_free)
		return ;
	while (to_free[++i])
		free(to_free[i]);
	free(to_free);
}

char	**ft_array_add_row(char **array, char *row)
{
	int		i;
	char	**result;

	if (!row)
		return (double_free(array), NULL);
	i = 0;
	while (array && array[i])
		i++;
	result = ft_calloc(sizeof(char *), i + 2);
	if (!result)
		return (double_free(array), NULL);
	i = -1;
	while (array && array[++i])
		result[i] = array[i];
	result[i] = row;
	return (double_free(array), result);
}

// Adding row to table and NULL terminating it
// Original table MUST be NULL terminated