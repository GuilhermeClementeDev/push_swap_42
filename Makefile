# -*- MakeFile -*-

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

LIBFT = ./lib/libft.a

LIB_PATH = ./lib

MY_SOURCES = main.c error.c create_stack.c ft_utilites.c ./moves/swap.c \
./moves/push.c ./moves/rotate.c

all: $(NAME)

$(NAME): $(MY_SOURCES) $(LIBFT)
	$(CC) $(CFLAGS) $(MY_SOURCES) $(LIBFT) -o $(NAME)

$(LIBFT):
	@make -C $(LIB_PATH)

clean:
	@make -C $(LIB_PATH) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIB_PATH) fclean

re: fclean all
