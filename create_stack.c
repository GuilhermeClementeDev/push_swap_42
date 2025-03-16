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
			while (str[i][k] == ' ')
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
