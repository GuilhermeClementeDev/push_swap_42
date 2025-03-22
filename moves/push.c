#include "../push_swap.h"

void	ft_push_ab(t_node **pushing, t_node **receiving)
{
	t_node	*first;

	if (!pushing || !*pushing)
		return;

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
}
