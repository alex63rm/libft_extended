/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:31:52 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/27 21:41:46 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Applies the function f to each character of the string passed as 
 * argument, and passing its index as first argument. Each character is passed 
 * by address to f to be modified if necessary.
 * 
 * @param s a string to apply a function to each character
 * @param f function that recieves as param the position of the chacracter in
 * a string and the content of that char (as an address char * --note that it
 * is a char pointer, not a string)
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, (s + i));
		i++;
	}
}
