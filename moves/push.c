/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:39:48 by guclemen          #+#    #+#             */
/*   Updated: 2025/03/26 13:39:49 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_node **pushing, t_node **receiving)
{
	t_node	*first;

	if (!pushing || !*pushing)
		return ;

	first = *pushing;
	*pushing = first->next;
	if (*pushing)
		(*pushing)->prev = NULL;

	if (*receiving == NULL)
		first->next = NULL;
	else
	{
		first->next = *receiving;
		(*receiving)->prev = first;
	}
	*receiving = first;
	ft_printf("pa\n");
}
void	pb(t_node **pushing, t_node **receiving)
{
	t_node	*first;

	if (!pushing || !*pushing)
		return ;

	first = *pushing;
	*pushing = first->next;
	if (*pushing)
		(*pushing)->prev = NULL;

	if (*receiving == NULL)
		first->next = NULL;
	else
	{
		first->next = *receiving;
		(*receiving)->prev = first;
	}
	*receiving = first;
	ft_printf("pb\n");
}
