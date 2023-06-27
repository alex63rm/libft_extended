/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:55:58 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/27 23:50:14 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc) and returns a copy of the string given as 
 * argument without the characters in set at the beginning or at the end of 
 * the string. If the allocation fails the function returns NULL.
 * i.e. s1 = "/-: hello /-:" set "/-: " --> strtrim (s1, set) return: hello
 * 
 * @param s1 a string
 * @param set a string of characters to be removed at start and end
 * @return char* the string with the trimmed sets
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, 0, end + 1));
}
