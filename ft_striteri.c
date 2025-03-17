/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 10:40:34 by ocgraf            #+#    #+#             */
/*   Updated: 2025/03/17 10:49:03 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/* void mapi(unsigned int i , char *c)
{
	*c += 1;
}

int main(void)
{
	char s[20] = "J'adore les pates";
	ft_striteri(s, mapi);
	return (0);
} */