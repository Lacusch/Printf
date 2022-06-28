CC= cc
CFLAGS= -Wall -Wextra -Werror
DEPS = ./libft.h ./libft.a
NAME = libftprintf.a
SOURCE = ft_prinft.c ft_printf_utils.c ft_printf_unsigned_nb.c
OBJECT = $(SOURCE:.c=.o)

all :${NAME}

${NAME}: ${OBJECT}
	make -C ./libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	ar rc libftprintf.a $(OBJECT)
clean:
	rm -f ${OBJECT}
	make clean -C ./libft
fclean: clean
	rm -f ${NAME}
	make fclean -C ./libft
re:  fclean all 

norm:
	norminette ft_prinft.c ft_printf.h ft_printf_unsigned_nb.c ft_printf_utils.c libft/	
.PHONY: clean fclean re
