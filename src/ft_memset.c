/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:19:58 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/27 23:56:09 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The memset() function writes "len" bytes of value "c" (converted to 
 * an unsigned char) to the string "b".
 * 
 * @param b string containing data to be overwritten
 * @param c unsigned char used to overwrite the string
 * @param len the size to be overwritten
 * @return void* it returns its first argument, overwritten with zeros
 */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*aux;

	aux = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		aux[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
