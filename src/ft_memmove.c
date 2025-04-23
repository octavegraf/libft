/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 09:54:53 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/04 17:51:39 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (dest > source && dest < source + len)
	{
		i = len;
		while (i > 0)
		{
			i--;
			dest[i] = source[i];
		}
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, len));
}

/*#include <memory.h>
#include <string.h>
#include <stdio.h>

char str1[7] = "aabbcc";
char str2[7] = "aabbcc";

int main( void )
{
	memmove( str1 + 2, str1, 4 );
	printf( "OG: %s\n", str1 );
	ft_memmove( str2 + 2, str2, 4 );
	printf( "FT: %s\n", str2 );
}
Source du main : Microsoft Learn*/