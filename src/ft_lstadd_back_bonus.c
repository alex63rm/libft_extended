/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:29:12 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/29 22:19:32 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief this function receives the head of a list and a new node to be added
 * at the back. If there is no head, the node will be set as the head. Else,
 * loop until the last position and allocate the node
 * @param lst address of the head of the list
 * @param new a pointer to the new node that will be added to the list (must 
 * have been malloced somewhere else)
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == 0)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
