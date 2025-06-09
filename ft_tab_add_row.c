/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_add_row.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:01:36 by ocgraf            #+#    #+#             */
/*   Updated: 2025/06/09 16:29:55 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tab_add_row(char ***tab, char *row)
{
	char	**temp;
	char	*line;
	int		i;

	i = 0;
	if (*tab)
		while ((*tab)[i])
			i++;
	line = ft_strdup(row);
	if (!line)
		return ;
	temp = malloc(sizeof(char *) * (i + 2));
	if (!temp)
		return (free(line));
	i = -1;
	if (*tab)
	{
		while ((*tab)[++i])
			temp[i] = (*tab)[i];
		i--;
	}
	temp[++i] = line;
	temp[++i] = NULL;
	free(*tab);
	*tab = temp;
}

// Adding row to table and NULL terminating it
// Original table MUST be NULL terminated