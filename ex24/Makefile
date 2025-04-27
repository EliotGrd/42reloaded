SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_strcmp.c \
	   srcs/ft_strlen.c \
	   srcs/ft_swap.c

INCS = includes

NAME = libft.a

all :
	cc -Wall -Wextra -Werror $(SRCS) -c -I $(INCS)
	ar -rcs $(NAME) *.o 

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
