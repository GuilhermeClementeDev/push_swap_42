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
	index = list_a->content;
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

	size_bits = ft_sizebits(*list_a);

}

