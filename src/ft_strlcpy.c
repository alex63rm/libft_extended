/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:55:58 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/27 22:29:19 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The strlcpy() function copies the src string to the dest string and
 *  then adds a terminating null byte. Unlike strncpy (), it takes the full size
 * of the buffer (not just the length) and guarantee to NUL-terminate the result
 * (as long as there is at least one byte free in dest). It may copy everything
 * or nothing, depending on the size of the buffer, but will always return the
 * lenght of the source string.
 * 
 * @param dst the string to be replaced
 * @param src the string to copy from
 * @param buffer the size of the buffer
 * @return size_t the length of the source, it copied the whole buffer
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t buffer)
{
	size_t	i;

	if (!dst && !src)
		return (ft_strlen(src));
	i = 0;
	if (buffer > 0)
	{
		while (src[i] && i < (buffer - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
