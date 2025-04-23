/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:20:55 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/18 09:26:01 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/* #include <fcntl.h>

int main(void)
{
	int fd = open("test.txt", O_RDWR | O_CREAT);
	ft_putstr_fd("Ceci est un test.", fd);
	close(fd);
	return (0);
} */