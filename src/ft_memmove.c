/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:55:21 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/28 00:15:28 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copies "len" bytes from "src" to "dst". The two strings may overlap; 
 * the copy is always done in a non-destructive manner. Casting to char * is
 * assumed, but it is valid for any data type if modified accordingly.
 * 
 * @param dst the memory area were src will be copied
 * @param src the memory area to copy
 * @param len the number of bytes to be copied, acts as an index
 * @return void* a pointer to the destination memory area
 */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*auxsrc;
	char	*auxdst;

	auxsrc = (char *)src;
	auxdst = (char *)dst;
	if (!src && !dst)
		return (dst);
	if (dst > src)
	{
		while (len--)
		{
			auxdst[len] = auxsrc[len];
		}
		return (dst);
	}
	i = 0;
	while (len--)
	{
		*(auxdst + i) = *(auxsrc + i);
		i++;
	}
	return (dst);
}
