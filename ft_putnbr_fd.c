/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:38:16 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/18 16:43:29 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
}

/* #include <fcntl.h>

int main(void)
{
	int fd = open("test.txt", O_RDWR | O_CREAT);
	ft_putnbr_fd(INT_MIN, fd);
	close(fd);
	return (0);
} */