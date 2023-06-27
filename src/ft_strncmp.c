/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:01:55 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/27 22:46:35 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The strncmp() function lexicographically compares not more than n 
 * characters in the null-terminated strings s1 and s2. Characters that appear
 * after a ‘\0’ character are not compared.
 * 
 * @param s1 first string
 * @param s2 second string
 * @param n index up to where the chars need to be compared
 * @return int 0 if the strings are equal. negative if the first different char 
 * in the second string is lower that the char in the first string. In summary,
 * 0 if equal strings, >0 or <0 if the strings are different
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned const char)s1[i] - (unsigned const char)s2[i]);
		i++;
	}
	return (0);
}
