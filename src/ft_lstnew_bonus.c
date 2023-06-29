/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:09:00 by alejarod          #+#    #+#             */
/*   Updated: 2023/06/29 22:19:50 by alejarod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief the function allocates memory for a new node (sizeof(t_list)). This 
 * node will be the head of the list. Then, assign the content passed as
 * argument to the content variable. The "next" field is set to NULL, indicating
 * the end of te list.
 * @param content the data passed as argument that will be saved in the node
 * @return t_list* returns the newly created node or 0 if malloc failed
 */

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == 0)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}
