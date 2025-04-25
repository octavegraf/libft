/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:27:59 by ocgraf            #+#    #+#             */
/*   Updated: 2025/04/25 10:53:03 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_charset(char c, char const *set);

int	count_words(char const *s, char const *set)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if ((((i == 0) || (is_in_charset(s[i - 1], set)))
				&& (!is_in_charset(s[i], set))))
			words++;
		i++;
	}
	return (words);
}

char	*cut_words(char const *s, char const *set)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && !is_in_charset(s[i], set))
		i++;
	word = malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && !is_in_charset(s[i], set))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tabtab;
	int		i;
	int		j;
	int		k;

	j = count_words(s, &c);
	tabtab = malloc((j + 1) * sizeof(char *));
	if (!tabtab)
		return (NULL);
	i = 0;
	k = 0;
	while (k < j)
	{
		while (s[i] && is_in_charset(s[i], &c))
			i++;
		tabtab[k] = cut_words(s + i, &c);
		i += ft_strlen(tabtab[k]);
		k++;
	}
	tabtab[k] = NULL;
	return (tabtab);
}
