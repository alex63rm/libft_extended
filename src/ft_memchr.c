/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:56:35 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/28 00:01:47 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Similar to strchr, this function searches the first occurrence of c
 * but limited to the size of n bytes of memory. Both c and the bytes of 
 * memory area are interpreted as unsigned char, but could be an array of any
 * data type if modified with casting
 * 
 * @param s the string to search in
 * @param c the character to search
 * @param n the bytes of memory to scan
 * @return void* NULL if char c is not found, else it returns a pointer from
 * the index position where the char c was first found
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	aux = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (aux[i] == (unsigned char)c)
			return ((void *)(aux + i));
		i++;
	}
	return (NULL);
}
