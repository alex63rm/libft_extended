/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:20:01 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/27 23:01:03 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief searches for the first occurrence of the character c (an unsigned
 * char) in the string pointed to by the string s
 * 
 * @param s the string to be searched 
 * @param c character to be searched
 * @return char* returns a pointer to the char that was found, meaning the 
 * whole string until the '\0' char. Returns NULL if no char was found
 */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
