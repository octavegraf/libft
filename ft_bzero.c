/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:54:53 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/03 14:00:24 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = s;
	while (n > 0)
	{
		str[i] = 0;
		i++;
		n--;
	}
}
/*#include <strings.h>
int main(void)
{
	char s[16] = "Ceci est un test";
	ft_bzero(s, 5);
}*/