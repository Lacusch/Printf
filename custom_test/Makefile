
CC= cc
CFlags= -Wall -Wextra -Werror
DEPS = ../libftprintf.a ../ft_printf.h
NAME = test

all :$(NAME)

$(NAME):
	make -C ../
	gcc main.c ../libftprintf.a -o test
clean: 
	rm -f test
re: clean all

.PHONY: clean re
