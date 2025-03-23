#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "lib/libft.h"

typedef struct s_node
{
	int				content;
	struct s_node	*prev;
	struct s_node	*next;
	int				index;
}					t_node;

void	ft_error(int n);
void	ft_free_node(t_node **list);

void	ft_verify_numbers(int n, char **str);
void	ft_check_equal(t_node **list_a);
void	ft_check_order(t_node  **list_a);

t_node	**ft_create_stack(int n, char **str);

t_node	*ft_newnode(int content);
void	ft_lstappend(t_node **list, t_node *new);
int		ft_atoil(const char *nptr, t_node **list);
void	ft_populate_index(t_node **list_a);

int	ft_list_size(t_node *lst);

void	ft_swap_ab(t_node **head);
void	ft_push_ab(t_node **pushing, t_node **receiving);
void	ft_rotate_ab(t_node **head);
void	ft_reverse_rotate_ab(t_node **head);

void	ft_radix(t_node **list_a, t_node **list_b);

#endif
