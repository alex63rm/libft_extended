/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 23:12:46 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/25 15:56:01 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief The atoi() function converts the initial portion of the string pointed
 * by str to int representation.It skips any space before the numbers, accepts 
 * one single optional sign * character (+ or -) and considers the all digits 
 * afterwards.
 * 1. Skip initial spaces, tabs etc
 * 2. Check the sign, if negative, final result * -1
 * 3. Loop the digits and multiply by the 10 base and convert from char to int
 * '0' is 48 in int, so decrease 48 to convert it to int
 * @param str a string of charactes that will be converted to an integer
 * @return int the converted string as an integer
 */
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - 48;
		i++;
	}
	return (num * sign);
}
