#include "push_swap.h"

int	ft_list_size(t_node *lst)
{
	unsigned int	count;

	count = 1;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
