/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:19:51 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/28 00:06:51 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief similar to strcmp, it compares two arrays of data up to a specific
 * index that acts as the limit (there is no '\0' like in strings). For
 * simplicity, the function casts them to unsigned char) but could refer to
 * any data type if modified accordingly
 * 
 * @param s1 the first area of memory to compare
 * @param s2 the second area of memory to compare
 * @param n the number of bytes up to where comparing needs to be done
 * @return int 0 if all the bytes are equal, >0 or <0 when the first
 * difference is spoted.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (aux1[i] != aux2[i])
			return (aux1[i] - aux2[i]);
		i++;
	}
	return (0);
}
