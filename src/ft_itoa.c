/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:25:22 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/25 16:07:19 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief This function receives a long integer (to support the negative min
 * integer) and counts the number of digits it has. The negative sign is also
 * counted as a digit.
 * 1. if number is 0, count 1 digit
 * 2. if number < 0, count one digit for the - sign
 * 3. Loop the number, dividing by 10 and counting 1 every time
 * @param n input number
 * @return int is the number of digits (4563 has 4 digits)
 */
static int	ft_intlen(long n)
{
	unsigned long	n_len;

	n_len = 0;
	if (n == 0)
		n_len++;
	if (n < 0)
	{
		n = n * -1;
		n_len++;
	}
	while (n > 0)
	{
		n = n / 10;
		n_len++;
	}
	return (n_len);
}
/**
 * @brief this function will write all the digits of the number as chars
 * in the allocated memory
 * 1. If number is 0, write a '0'
 * 2. If number < 0, write the - sign
 * 3. Loop and write the chars from back to start, converting them to an
 * int by adding 48 according to the ASCII table
 * @param ptr the allocated memory pointer
 * @param n_len number of digits required to fill
 * @param n the number to be converted
 * @return char* the pointer to the start of the string
 */
static char	*ft_write_number(char *ptr, unsigned long n_len, long n)
{
	if (n == 0)
		*ptr = '0';
	if (n < 0)
	{
		*ptr = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		*(ptr + --n_len) = (n % 10) + 48;
		n = n / 10;
	}
	return (ptr);
}
/**
 * @brief receive an integer and convert it to a string of characters,
 * allocating enough memory with malloc
 * 1. Calculate the lenght of the number to allocate memory
 * 2. Write the number
 * 3. Add the final null character to the string
 * @param n the integer to be converted
 * @return char* is the string of characters
 */
char	*ft_itoa(int n)
{
	char	*ptr;
	int		n_len;

	n_len = ft_intlen(n);
	ptr = (char *)malloc(sizeof(char) * n_len + 1);
	if (!ptr)
		return (0);
	ptr = ft_write_number(ptr, n_len, n);
	ptr[n_len] = '\0';
	return (ptr);
}
