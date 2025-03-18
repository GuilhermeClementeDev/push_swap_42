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
				ft_error("Invalid argument\n", 3);
		while (str[i][k])
		{
			while ((str[i][k] >= '\t' && str[i][k] <= '\r') || str[i][k] == ' ')
				k++;
			if (str[i][k] == '-' || str[i][k] == '+')
				k++;
			if (!ft_isdigit(str[i][k]) && str[i][k] != '\0')
				ft_error("Not a number\n", 2);
			if (str[i][k])
				k++;
		}
		if (str[i][k])
				ft_error("Invalid argument\n", 3);
		i++;
	}
}

t_node **ft_create_stack(int n, char **str)
{
	t_node *tmp;
	t_node **list = NULL;
	int	i;
	int	k;

	i = 1;
	while (i < n)
	{
		k = 0;
		while(str[i][k])
		{
			while ((str[i][k] >= '\t' && str[i][k] <= '\r') || str[i][k] == ' ')
				k++;
			if (str[i][k])
			{
				tmp = ft_lstnew(ft_atoi(&str[i][k]));
				if (list == NULL)
					list = &tmp;
				else
					ft_lstadd_back(list, tmp);
				while (!((str[i][k] >= '\t' && str[i][k] <= '\r') || str[i][k] == ' ') && str[i][k])
				k++;
			}
		}
		i++;
	}
	return (list);
}
