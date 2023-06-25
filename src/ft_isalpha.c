/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:13:06 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/25 15:45:30 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief tests weather a character is a lowercase letter or an uppercase letter
 * The value of the argument must be representable as an unsigned char or
 the value of EOF.
 * @param c the character to check
 * @return int 1 if the character is a letter, else 0.
 */
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	else
		return (0);
}
