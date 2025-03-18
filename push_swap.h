#include "lib/libft.h"

typedef struct s_node
{
	int				content;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

void	ft_error(char *str, int n);

void	ft_verify_numbers(int n, char **str);
