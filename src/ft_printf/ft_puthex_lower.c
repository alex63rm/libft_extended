/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:09:57 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/25 13:18:23 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static size_t	ft_len_hex(unsigned int hex)
{
	size_t	i;

	i = 1;
	while (hex >= 16)
	{
		hex = hex / 16;
		i++;
	}
	return (i);
}

size_t	ft_puthex_lower(unsigned int hex)
{
	size_t	len_hex;

	len_hex = 0;
	len_hex += ft_len_hex(hex);
	if (hex >= 16)
		ft_puthex_lower(hex / 16);
	ft_putchar("0123456789abcdef"[hex % 16]);
	return (len_hex);
}
