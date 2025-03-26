/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:40:08 by guclemen          #+#    #+#             */
/*   Updated: 2025/03/26 13:40:10 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_node **head)
{
	t_node	*first;
	t_node	*second;

	first = *head;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->next = second->prev;
	second->prev = NULL;
	first->prev = second;
	*head = second;
	ft_printf("sa\n");
}
