/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:27:59 by ocgraf            #+#    #+#             */
/*   Updated: 2025/04/30 10:00:25 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	c_is_in_charset(char c, char set)
{
	if (c == set)
		return (1);
	return (0);
}

void	free_everything(char **tabtab, int k)
{
	while (k > 0)
		free(tabtab[--k]);
	free(tabtab);
}

int	count_words(char const *s, char set)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if ((((i == 0) || (c_is_in_charset(s[i - 1], set)))
				&& (!c_is_in_charset(s[i], set))))
			words++;
		i++;
	}
	return (words);
}

char	*cut_words(char const *s, char set)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && !c_is_in_charset(s[i], set))
		i++;
	word = malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && !c_is_in_charset(s[i], set))
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

	j = count_words(s, c);
	tabtab = malloc((j + 1) * sizeof(char *));
	if (!tabtab)
		return (NULL);
	i = 0;
	k = 0;
	while (k < j)
	{
		while (s[i] && c_is_in_charset(s[i], c))
			i++;
		tabtab[k] = cut_words(s + i, c);
		if (!tabtab[k])
			return (free_everything(tabtab, k), NULL);
		i += ft_strlen(tabtab[k]);
		k++;
	}
	tabtab[k] = NULL;
	return (tabtab);
}
