/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 15:18:52 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/17 10:11:24 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*r;

	i = 0;
	r = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!r)
		return (NULL);
	while (s[i])
	{
		r[i] = f(i, s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}

/* char mapi(unsigned int i , char c)
{
	c += 1;
	return (c);
}

int main(void)
{
	char *s = ft_strmapi("J'adore les pates", mapi);
	return (0);
} */