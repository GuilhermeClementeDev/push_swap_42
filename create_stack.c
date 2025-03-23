#include "push_swap.h"

void	ft_process_str(t_node **list, char *str)
{
	int	k;
	t_node	*tmp;

	k = 0;
	while (str[k])
	{
		while ((str[k] >= '\t' && str[k] <= '\r') || str[k] == ' ')
				k++;
		if (str[k])
		{
			tmp = ft_newnode(ft_atoi(&str[k]));
			if (list == NULL)
				list = &tmp;
			else
				ft_lstappend(list, tmp);
			while (!((str[k] >= '\t' && str[k] <= '\r') || str[k] == ' ') && str[k])
				k++;
		}
	}
}

t_node	**ft_create_stack(int n, char **str)
{
	t_node **list;
	int i;

	list = malloc(sizeof(t_node *));
	if (!list)
		ft_error(1);
	*list = NULL;
	i = 1;
	while (i < n)
	{
		ft_process_str(list, str[i]);
		i++;
	}
	return (list);
}
