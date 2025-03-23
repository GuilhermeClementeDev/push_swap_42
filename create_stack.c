#include "push_swap.h"

void	ft_verify_numbers(int n, char **str)
{
	int	i;
	int	k;

	i = 1;
	while (i < n)
	{
		k = 0;
		if (!str[i][k])
			ft_error(3);
		while (str[i][k])
		{
			while ((str[i][k] >= '\t' && str[i][k] <= '\r') || str[i][k] == ' ')
				k++;
			if (str[i][k] == '-' || str[i][k] == '+')
				if (!ft_isdigit(str[i][++k]))
					ft_error(2);
			if (!ft_isdigit(str[i][k]) && str[i][k] != '\0')
				ft_error(2);
			if (str[i][k])
				k++;
		}
		i++;
	}
}

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
