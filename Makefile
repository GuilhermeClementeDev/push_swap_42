# -*- MakeFile -*-

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIBFT = ./lib/libft.a

LIB_PATH = ./lib

MY_SOURCES = main.c error.c create_stack.c ft_utilites.c ./moves/swap.c \
./moves/push.c ./moves/rotate.c verification.c radix.c ft_utilites2.c \
small_sort.c

OBJS = $(MY_SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@make -C $(LIB_PATH)

clean:
	@make -C $(LIB_PATH) clean
	@rm -f $(OBJS)


fclean: clean
	@rm -f $(NAME)
	@make -C $(LIB_PATH) fclean

re: fclean all
