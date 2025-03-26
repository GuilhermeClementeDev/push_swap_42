/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilites2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:37:19 by guclemen          #+#    #+#             */
/*   Updated: 2025/03/26 13:37:23 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_list_size(t_node *lst)
{
	unsigned int	count;

	count = 1;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

int	ft_smallest_pos(t_node *list_a)
{
	int	i;
	int	position;
	int	index;

	i = 0;
	index = list_a->index;
	while (list_a)
	{
		if (index > list_a->index)
		{
			index = list_a->index;
			position = i;
		}
		i++;
		list_a = list_a->next;
	}
	return (position);
}

void	push_smallest_to_b(t_node **list_a, t_node **list_b)
{
	int		len;
	int		position;

	len = ft_list_size(*list_a);
	position = ft_smallest_pos(*list_a);
	if (position < len / 2)
	{
		while (position-- > 0)
			ra(list_a);
	}
	else
	{
		while (position++ < len)
			rra(list_a);
	}
	pb(list_a, list_b);
}
