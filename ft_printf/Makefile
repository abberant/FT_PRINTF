NAME = libftprintf.a

SRC =		ft_printf.c		ft_layout.c		ft_putchar.c	ft_puthexnbr.c		ft_putstr.c		ft_putnbr.c		ft_putunbr.c

OBJ_P = $(SRC:.c=.o)

RM = rm -f

CC = cc

FLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJ_P)
		 ar -rc $(NAME) $(OBJ_P)

all: $(NAME)

clean: $(RM) $(OBJ_P)

fclean: clean
		$(RM) $(NAME)
		
re: fclean all
