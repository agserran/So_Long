NAME = so_long

CC = gcc

CFLAGS = -Wall -Wextra -Werror $(INCLUDES)

INCLUDES = -I ./includes

SRCS_SL = echeck.c get_next_line.c get_next_line_utils.c map_checker.c positions.c utils.c

SRCS = $(addprefix src/, $(SRCS_SL))

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(INCLUDES) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
