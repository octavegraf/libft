/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:03:26 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/18 09:19:00 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* #include <fcntl.h>

int main(void)
{
	int fd = open("test.txt", O_RDWR | O_CREAT);
	ft_putchar_fd('t', fd);
	close(fd);
	return (0);
} */