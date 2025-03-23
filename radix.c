#include "push_swap.h"

int	ft_sizebits(t_node *list_a)
{
	int	index;
	t_node	*tmp;
	int	bits;

	index = 0;
	bits = 0;
	tmp = list_a;
	while (tmp)
	{
		if (index < tmp->index)
			index = tmp->index;
		tmp = tmp->next;
	}
	while (list_a->index != index)
		list_a = list_a->next;
	index = list_a->index;
	while (index)
	{
		index /= 2;
		bits++;
	}
	return (bits);
}

void	ft_radix(t_node **list_a, t_node **list_b)
{
	int	size_bits;
	int	bit;
	int list_size_a;
	int list_size_b;

	bit = 0;
	size_bits = ft_sizebits(*list_a);
	while (bit < size_bits)
	{
		list_size_a = ft_list_size(*list_a);
		while (list_size_a)
		{
			if (((*list_a)->index >> bit) & 1)
				ft_rotate_ab(list_a);
			else
				ft_push_ab(list_a, list_b);
			list_size_a--;
		}
		list_size_b = ft_list_size(*list_b);
		while (list_size_b--)
		{
			ft_push_ab(list_b, list_a);
		}
		bit++;
	}
}

