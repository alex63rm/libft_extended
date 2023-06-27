/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:29:55 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/27 23:01:12 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief searches for the first occurrence of the character c (an unsigned
 * char) starting from the end (reversed)
 * 
 * @param s the string to be searched 
 * @param c character to be searched
 * @return char* returns the string from where the char was found, to the end
 * of the string, o r NULL if the char was not found
 */

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}
