/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:03:46 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/25 14:37:59 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief writes a character to the specified file descriptor.
 * 
 * @param c a character
 * @return void
 */
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
