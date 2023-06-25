/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:58:27 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/25 15:43:25 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief The calloc() function contiguously allocates enough space for "count"
 * objects that are "size" bytes of memory each and returns a pointer to the 
 * allocated memory. The allocated memory is filled with bytes of value zero.
 * If there is an error, they return a NULL pointer.
 * @param count number of objects
 * @param size size of each object (commonly replaced by <sizeof(data_type)>)
 * @return returns the created pointer of the stablished size
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size * count);
	return (ptr);
}
