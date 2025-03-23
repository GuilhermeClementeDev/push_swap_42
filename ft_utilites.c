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
void	ft_check_max_min_int(long result, t_node **list)
{
	if (result > 2147483647 || result < -2147483648)
	{
		ft_free_node(list);
		ft_error(5);
	}
}
int	ft_atoil(const char *nptr, t_node **list)
{
	int		i;
	int		neg;
	long	result;

	neg = 1;
	i = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	result = 0;
	while (ft_isdigit(nptr[i]))
	{
		result = (result * 10) + (nptr[i] - '0');
		i++;
	}
	result = result * neg;
	ft_check_max_min_int(result, list);
	return (result);
}
