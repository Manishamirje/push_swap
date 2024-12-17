NAME = push_swap.a

SRC = 

OBJS = $(SRC:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

HEADER = ft_printf.h

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(FLAGS) -c $(SRC)
		ar rc $(NAME) $(OBJS)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all