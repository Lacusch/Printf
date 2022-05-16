CC= cc
CFLAGS= -Wall -Wextra -Werror
DEPS = ./libft.h ./libft.a
NAME = libftprintf.a
SOURCE = ft_prinft.c
OBJECT = $(SOURCE:.c=.o)
# ar -r libftprintf.a ft_putchar_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_strlen.o
# ar -x libftprintf.a ft_putchar_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_strlen.o
all :${NAME}

${NAME}: ${OBJECT}
	ar rc $@ $^
${OBJECT}: ${SOURCE}
	make -C ./libft
	$(CC) $(CFLAGS) -c -o $@ $^
clean:
	rm -f ${OBJECT}
fclean: clean
	rm -f ${NAME}
re:  fclean all 

.PHONY: clean fclean re