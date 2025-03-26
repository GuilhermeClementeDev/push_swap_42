/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:36:52 by guclemen          #+#    #+#             */
/*   Updated: 2025/03/26 13:36:59 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_process_str(t_node **list, char *str)
{
	int		k;
	t_node	*tmp;

	k = 0;
	while (str[k])
	{
		while ((str[k] >= '\t' && str[k] <= '\r') || str[k] == ' ')
			k++;
		if (str[k])
		{
			tmp = ft_newnode(ft_atoil(&str[k], list));
			if (list == NULL)
				list = &tmp;
			else
				ft_lstappend(list, tmp);
			while (!((str[k] >= '\t' && str[k] <= '\r') || \
			str[k] == ' ') && str[k])
				k++;
		}
	}
}

t_node	**ft_create_stack(int n, char **str)
{
	t_node	**list;
	int		i;

	list = malloc(sizeof(t_node *));
	if (!list)
		ft_error(1);
	*list = NULL;
	i = 1;
	while (i < n)
	{
		ft_process_str(list, str[i]);
		i++;
	}
	return (list);
}
