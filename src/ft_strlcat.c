/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:41:45 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/28 00:18:55 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief appends the src string to the dest string, up to a maximum value of
 * a buffer size, it differs from strjoin, that it cannot return the concatenated
 * string (no malloc), just the total lenght of the appended string
 * 
 * @param dst destination string that will be appended to source
 * @param src source string where dst will be appended
 * @param buffer limit the length to ensure that the total lenght of the 
 * concatenated string does not exceed a certain value
 * @return size_t returns the size of src + dst together
 */

size_t	ft_strlcat(char *dst, const char *src, size_t buffer)
{
	size_t	i;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	if (buffer < dst_len)
		dst_len = buffer;
	i = 0;
	while (src[i] && dst_len + i + 1 < buffer)
	{
		*(dst + dst_len + i) = *(src + i);
		i++;
	}
	if (i != 0)
		*(dst + dst_len + i) = '\0';
	return (dst_len + ft_strlen(src));
}
