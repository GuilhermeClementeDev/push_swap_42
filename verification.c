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

void	ft_check_equal(t_node **list_a)
{
	t_node	*tmp1;
	t_node	*tmp2;
	int	num;

	tmp1 = *list_a;
	while (tmp1)
	{
		num = tmp1->content;
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if (num == tmp2->content)
			{
				ft_free_node(list_a);
				ft_error(4);
			}
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
}
void	ft_check_order(t_node **list_a)
{
	t_node	*tmp1;
	int	num;

	tmp1 = *list_a;
	while (tmp1)
	{
		num = tmp1->content;
		if (tmp1->next)
			if (num > tmp1->next->content)
				return ;
		tmp1 = tmp1->next;
	}
	ft_free_node(list_a);
	exit(0);
}
