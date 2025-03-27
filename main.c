/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guclemen <guclemen@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 13:37:50 by guclemen          #+#    #+#             */
/*   Updated: 2025/03/26 13:37:52 by guclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	**list_a;
	t_node	**list_b;
	int		size;

	if (argc == 1)
		ft_error(1);
	ft_verify_numbers(argc, argv);
	list_a = ft_create_stack(argc, argv);
	ft_check_equal(list_a);
	ft_check_order(list_a);
	size = ft_populate_index(list_a);
	list_b = ft_create_stack(0, argv);
	if (size <= 5)
		ft_small_list(list_a, list_b, size);
	ft_radix(list_a, list_b);
	ft_free_node(list_b);
	ft_check_order(list_a);
	return (0);
}
