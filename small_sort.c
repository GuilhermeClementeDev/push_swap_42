#include "push_swap.h"

void	ft_sort_three(t_node **list_a)
{
	int	a;
	int	b;
	int	c;

	a = (*list_a)->index;
	b = (*list_a)->next->index;
	c = (*list_a)->next->next->index;
	if (a > c && a > b)
	{
		ft_rotate_ab (list_a);
		ft_check_order (list_a);
		ft_swap_ab (list_a);
	}
	else if (c > a && c > b)
		ft_swap_ab(list_a);
	else if (a < c)
	{
		ft_swap_ab(list_a);
		ft_rotate_ab(list_a);
	}
	else
		ft_reverse_rotate_ab(list_a);
}

void	ft_small_list(t_node **list_a, int size)
{
	if (size == 2)
		ft_rotate_ab(list_a);
	else if (size == 3)
		ft_sort_three(list_a);
	//else if (size == 4)
	//else if (size == 5)
	ft_check_order(list_a);
}
