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
