CC= cc
CFLAGS= -Wall -Wextra -Werror
DEPS = ./libft.h ./libft.a
NAME = libftprintf.a
SOURCE = ft_prinft.c
OBJECT = $(SOURCE:.c=.o)

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