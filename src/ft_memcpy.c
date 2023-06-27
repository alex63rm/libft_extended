/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:19:54 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/28 00:11:48 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief similar to strcpy, it copies the memory area in src to the memory
 * area in dst. For simplicity it is casted to char *, but it could be used for
 * any data type. 
 * @attention The memory areas must not overlap. If unsure, use memmove() if the
 * memory areas do overlap.
 * 
 * @param dst the memory area were src will be copied
 * @param src the memory area to be copied
 * @param n bytes to be copied, acting as an index
 * @return void* a pointer to the copied memory area dst
 */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*auxdst;
	const char	*auxsrc;

	auxdst = dst;
	auxsrc = src;
	if (!dst && !src)
		return (dst);
	i = 0;
	while (i < n)
	{
		auxdst[i] = auxsrc[i];
		i++;
	}
	return (dst);
}
