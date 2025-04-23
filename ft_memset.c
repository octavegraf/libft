/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:03:44 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/03 11:05:21 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	char	ch;
	int		i;

	str = b;
	ch = c;
	i = 0;
	while (len > 0)
	{
		str[i] = ch;
		i++;
		len--;
	}
	return (b);
}
/* #include <stdio.h>
#include <string.h>
int main( void )
{
	char buffer[] = "This is a test of the memset function";
	memset(buffer, '*', 4 );
	printf( "Original:  %s\n", buffer);
	char buffer2[] = "This is a test of the memset function";
	ft_memset(buffer2, '*', 4 );
	printf( "FT:  %s\n", buffer2);
} */
/* On convertit le int c en char afin de pouvoir remplacer len char 
dans le pointer b
Source du main : Microsoft Learn*/