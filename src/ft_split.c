/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:06:25 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/27 21:41:32 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief counts the number of times a character is found in a string, until
 * the string is over (null -> '\0')
 * 
 * @param s the string to search in
 * @param c the character to be searched
 * @return int number of times the char was found of 0 if it was not found
 */

static int	count_words(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			count++;
			continue ;
		}
		i++;
	}
	return (count);
}
/**
 * @brief The function splits a string by a desired character, every substring
 * is a word. It allocates memory for every word and returns a pointer to the
 * first word of the array. ([word1], [word2],... , [word n]).
 * The allocated memory needs to be free when it is no longer needed to avoid
 *  memory leaks.
 * 
 * @param s the string to be split
 * @param c the char that determines where the string needs to be split
 * @return char** is a pointer to the first "word".
 */

char	**ft_split(char const *s, char c)
{
	char			**new;
	unsigned int	i;
	unsigned int	word_start;
	unsigned int	word_nb;

	new = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!new)
		return (0);
	i = 0;
	word_nb = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word_start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			new[word_nb] = ft_substr(s, word_start, i - word_start);
			word_nb++;
			continue ;
		}
		i++;
	}
	new[word_nb] = 0;
	return (new);
}
