/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:07:56 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/29 22:04:49 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief the function receives a node of a linked-list and applies a function
 * to delete the content of the node. After the content is deleted, the 
 * memory is freed
 * 
 * @param lst head of the linked list 
 * @param del pointer to the function that delets the content
 */

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
