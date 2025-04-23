/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:00:13 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/31 11:23:29 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*copy_numbers(int n, int l, char *number)
{
	unsigned int	ul;

	ul = n;
	if (n < 0)
	{
		number[0] = '-';
		ul = -n;
	}
	number[l] = '\0';
	l--;
	while (ul != 0)
	{
		number[l] = (ul % 10) + '0';
		ul /= 10;
		l--;
	}
	return (number);
}

char	*ft_itoa(int n)
{
	int		i;
	int		l;
	char	*number;

	l = 0;
	if (n < 0)
		l++;
	i = n;
	while (i != 0)
	{
		l++;
		i /= 10;
	}
	number = malloc((l + 1) * sizeof(char));
	if (!number)
		return (NULL);
	number = copy_numbers(n, l, number);
	return (number);
}
