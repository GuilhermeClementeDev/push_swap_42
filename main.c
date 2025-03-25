#include "push_swap.h"

void	ft_print_list(t_node *head)
{
	t_node *tmp;
	ft_printf("\n");
	if (!head)
	{
		ft_printf("A lista está vazia.\n");
		return;
	}

	ft_printf("Lista a:\n");
	tmp = head;
	while (tmp)
	{
		ft_printf("content:%d ", tmp->content);
		ft_printf("index:%d \n", tmp->index);
		tmp = tmp->next;
	}
}

int main(int argc, char** argv)
{
	t_node	**list_a;
	t_node	**list_b;
	int		size;

	if (argc == 1)
		ft_error(1);
	ft_verify_numbers(argc, argv);
	list_a = ft_create_stack(argc, argv);
	ft_check_equal(list_a);
	ft_check_order(list_a);
	size = ft_populate_index(list_a);
	list_b = ft_create_stack(0, argv);
	if (size <= 5)
		ft_small_list(list_a, list_b, size);
	ft_radix(list_a, list_b);
	ft_print_list(*list_a);
	ft_print_list(*list_b);
	ft_free_node(list_b);
	ft_check_order(list_a);
	return (0);
}
