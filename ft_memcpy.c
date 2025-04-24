/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:54:53 by ocgraf            #+#    #+#             */
/*   Updated: 2025/04/22 17:43:03 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
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