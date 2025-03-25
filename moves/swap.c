#include "../push_swap.h"

void	sa(t_node **head)
{
	t_node	*first;
	t_node	*second;

	first = *head;
	second = first->next;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->next = second->prev;
	second->prev = NULL;
	first->prev = second;
	*head = second;
	ft_printf("sa\n");
}
