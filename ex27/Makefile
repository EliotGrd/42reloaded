SRC = main.c

OBJS = $(patsubst %.c, %.o, $(SRC))

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = ft_display_file

RM = rm -f

all: $(NAME)



$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(FLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
