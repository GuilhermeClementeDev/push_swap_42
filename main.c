#include "push_swap.h"

int main(int argc, char** argv)
{
	if (argc == 1)
		ft_error("No arguments recevied\n", 1);
	ft_verify_numbers(argc, argv);

	return (0);
}
