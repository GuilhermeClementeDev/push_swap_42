#include "push_swap.h"

t_node	*ft_lstnew(void *content)
{
	t_node	*tmp;

	tmp = (t_node *)malloc(sizeof(t_node));
	if (!tmp)
		return (NULL);
	tmp->content = content;
	tmp->next = NULL;
	tmp->prev = NULL;
	return (tmp);
}
