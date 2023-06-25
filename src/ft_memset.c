/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:19:58 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/25 14:52:06 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The memset() function writes "len" bytes of value "c" (converted to 
 * an unsigned char) to the string "b". The memset() function returns its first 
 * argument.
 * 
 * @param b string containing data to be overwritten
 * @param c unsigned char used to overwrite the string
 * @param len the size to be overwritten
 * @return void* 
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
