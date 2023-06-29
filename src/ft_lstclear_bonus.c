/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:18:18 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/29 22:08:18 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief the function receives a pointer to the head of the linked list and 
 * applies a function to delete the content, looping until all the nodes have
 * been deleted. A temp node is needed in order not to lose the position of the
 * head that will be the last node to be deleted (equaling the address to 0)
 * 
 * @param lst address to the head node of the linked list
 * @param del function that delets the content of a node
 */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst == 0)
		return ;
	while (*lst != 0)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = 0;
}
