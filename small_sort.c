/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:39:13 by guclemen          #+#    #+#             */
/*   Updated: 2025/03/26 13:39:15 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_node **list_a)
{
	int	a;
	int	b;
	int	c;

	a = (*list_a)->index;
	b = (*list_a)->next->index;
	c = (*list_a)->next->next->index;
	if (a < b && b < c)
		return ;
	if (a > c && a > b)
	{
		ra(list_a);
		if (b > c)
			sa(list_a);
	}
	else if (c > a && c > b)
		sa(list_a);
	else if (a < c)
	{
		sa(list_a);
		ra(list_a);
	}
	else
		rra(list_a);
}

void	ft_sort_four(t_node **list_a, t_node **list_b)
{
	push_smallest_to_b(list_a, list_b);
	ft_sort_three(list_a);
	pa(list_b, list_a);
}

void	ft_sort_five(t_node **list_a, t_node **list_b)
{
	push_smallest_to_b(list_a, list_b);
	ft_sort_four(list_a, list_b);
	pa(list_b, list_a);
}

void	ft_small_list(t_node **list_a, t_node **list_b, int size)
{
	if (size == 2)
		sa(list_a);
	else if (size == 3)
		ft_sort_three(list_a);
	else if (size == 4)
		ft_sort_four(list_a, list_b);
	else if (size == 5)
		ft_sort_five(list_a, list_b);
	ft_print_list(*list_a);
	ft_print_list(*list_b);
	ft_free_node(list_b);
	ft_check_order(list_a);
}
