#include "push_swap.h"

int main(int argc, char** argv)
{
	if (argc != 1)
	{
		int	i;

		i = 1;
		while (i < argc)
		{
			ft_printf("%s\n", argv[i]);
			i++;
		}
	}
	else
		ft_printf("Otario\n");
}
