#include "../push_swap.h"

void	ra(t_node **head)
{
	t_node	*first;

	first = *head;
	*head = first->next;
	if (*head)
		(*head)->prev = NULL;
	first->next = NULL;
	ft_lstappend(head, first);
	ft_printf("ra\n");
}
void	rra(t_node **head)
{
	t_node	*last;

	while ((*head)->next)
		*head = (*head)->next;
	last = *head;
	(*head)->prev->next = NULL;
	while ((*head)->prev)
		*head = (*head)->prev;
	last->next = *head;
	last->prev = NULL;
	(*head)->prev = last;
	*head = last;
	ft_printf("rra\n");
}
