#include "push_swap.h"

void	ft_print_list(t_node *head, t_node *b)
{
	t_node *tmp;

	if (!head)
	{
		ft_printf("A lista está vazia.\n");
		return;
	}

	ft_printf("Lista a:\n");
	tmp = head;
	while (tmp)
	{
		ft_printf("%d ", tmp->content);
		tmp = tmp->next;
	}
	ft_printf("\n");
	ft_printf("Lista b:\n");
	while (b)
	{
		ft_printf("%d ", b->content);
		b = b->next;
	}
	ft_printf("\n");
}

int main(int argc, char** argv)
{
	t_node	**list_a;
	t_node	**list_b;

	if (argc == 1)
		ft_error("No arguments recevied\n", 1);
	ft_verify_numbers(argc, argv);
	list_a = ft_create_stack(argc, argv);
	list_b = ft_create_stack(0, argv);
	ft_reverse_rotate_ab(list_a);
	ft_print_list(*list_a, *list_b);
	return (0);
}
