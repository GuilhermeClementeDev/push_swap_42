#include "push_swap.h"

t_node	*ft_newnode(int content)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->content = content;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

void	ft_lstappend(t_node **list, t_node *new)
{
	t_node	*last;

	if (!list || !new)
		return;
	if (*list == NULL)
	{
		*list = new;
		return;
	}
	last = *list;
	while (last->next)
		last = last->next;
	last->next = new;
	new->prev = last;
}
