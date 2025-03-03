/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:54:53 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/03 18:10:40 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int		i;
	int		j;
	char	*dest;
	char	*source;

	dest = (char *) dst;
	source = (char *) src;
	i = 0;
	j = n;
	while (i < j)
	{
		dest[i] = source[i];
		i++;
	}
}
/* #include <string.h>
#include <stdio.h>
 
#define MAX_LEN 80
 
char source[ MAX_LEN ] = "This is the source string";
char target[ MAX_LEN ] = "This is the target string";
 
int main(void)
{
  printf( "Before memcpy, target is \"%s\"\n", target );
  ft_memcpy( target, source, sizeof(source));
  printf( "After memcpy, target becomes \"%s\"\n", target );
}
Source du main : Microsoft Learn */