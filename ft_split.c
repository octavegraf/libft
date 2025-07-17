/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocgraf <ocgraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:27:59 by ocgraf            #+#    #+#             */
/*   Updated: 2025/07/17 12:21:58 by ocgraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_charset(char c, char const *set);

static int	count_words(char const *s, char sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != sep && (i == 0 || s[i - 1] == sep))
			words++;
		i++;
	}
	return (words);
}

static char	*cut_words(char const *s, char sep)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] && s[i] != sep)
		i++;
	word = malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != sep)
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
	int		words;
	int		i;
	int		k;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	tabtab = malloc((words + 1) * sizeof(char *));
	if (!tabtab)
		return (NULL);
	i = 0;
	k = -1;
	while (k < words)
	{
		while (s[i] && s[i] == c)
			i++;
		tabtab[++k] = cut_words(s + i, c);
		if (!tabtab[k])
			return (NULL);
		while (s[i] && s[i] != c)
			i++;
	}
	tabtab[k] = NULL;
	return (tabtab);
}
