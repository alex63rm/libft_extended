/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:39:10 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/29 22:17:49 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief this function takes a pointer to the head of a singly-linked list and
 * traverses the list until it reaches the last node. It returns a pointer to 
 * the last node or NULL if the list is empty.
 * @param lst head of a linked list
 * @return t_list* the last node of the list
 */

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == 0)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
