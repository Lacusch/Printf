
CC= cc
CFlags= -Wall -Wextra -Werror
DEPS = ../libftprintf.a ../ft_printf.h
NAME = test
OBJECTS = unsigned_test.o
all :$(NAME)

$(NAME):
	make -C ../
	gcc unsigned_test.c ../libftprintf.a -o unsigned_test.o
clean: 
	rm -f $(OBJECTS)
re: clean all

.PHONY: clean re
