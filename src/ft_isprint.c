/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:19:45 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/25 15:49:41 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief checks weather a character is printable. Printable characters according
 * to the ASCII table range from 32 space to 126 included
 * 
 * @param c the character to check, casted to integer
 * @return int 1 if the char is printable, else 0
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	else
		return (0);
}
