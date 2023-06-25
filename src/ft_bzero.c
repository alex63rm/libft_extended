/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:12:57 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/25 15:43:29 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief The bzero() function writes n zeroed bytes to the string s. 
 * Effectively erases all data by writing zeros (bytes containing '\0').
 * If n is zero, bzero() does nothing.
 * @param s the string to be overwritten
 * @param n the bytes (lenght) of data to be overwritten
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
