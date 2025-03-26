/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:37:08 by guclemen          #+#    #+#             */
/*   Updated: 2025/03/26 13:37:09 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_node(t_node **list)
{
	t_node	*tmp;

	while (*list)
	{
		tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
	free(list);
}

void	ft_error(int n)
{
	ft_putstr_fd("Error\n", 2);
	exit (n);
}
