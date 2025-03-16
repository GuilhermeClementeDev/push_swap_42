#include "push_swap.h"

void	ft_error(char *str, int n)
{
	ft_putstr_fd("Error :(\n", 2);
	ft_putstr_fd(str, 2);
	exit (n);
}
