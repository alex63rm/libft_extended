/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:10:41 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/27 21:44:08 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief allocates memory with malloc and joins two strings, ending with '\0',
 * concatenating s1 and s2.
 * 
 * @param s1 first string
 * @param s2 second string
 * @return char* the resulting joined string ending in '\0' or NULL if memory
 * allocation failed
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	n;
	size_t	i;
	size_t	j;
	char	*ptr;

	n = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * n + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
