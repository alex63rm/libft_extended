/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:23:07 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/25 14:28:16 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
/**
 * @brief this function sends its variable list of arguments formatted in the 
 * correct type to the stdout (FILENO = 1).
 * 
 * @param str a string that will be printed on the stdout (1). If a % sign is 
 * found, the next char will indicate the type of format that needs to be
 * applied
 * @param ... list of variables. One for every % sign. 
 * @return int. Printf returns an integer that is the count of bytes it sent
 * to the stdout (1).
 */
int	ft_printf(char const *str, ...)
{
	va_list	args;
	size_t	len;
	int		i;

	va_start(args, str);
	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			len++;
		}
		else if (str[i] == '%')
			len = ft_check_format(&str[++i], len, args);
		i++;
	}
	va_end(args);
	return ((int)len);
}
