
CC= cc
CFlags= -Wall -Wextra -Werror
DEPS = ../libftprintf.a ../ft_printf.h
NAME = test
OBJECTS = unsigned_test.o char_test.o string_test.o pointer_test.o
LIBFT = ../libftprintf.a
all :$(NAME) c u s p

$(NAME):
	make -C ../
c:
	gcc char_test.c $(LIBFT) -o char_test.o
u:
	gcc unsigned_test.c $(LIBFT) -o unsigned_test.o
s:
	gcc string_test.c  $(LIBFT) -o string_test.o
p:
	gcc pointer_test.c  $(LIBFT) -o pointer_test.o
clean: 
	rm -f $(OBJECTS)
re: clean all

.PHONY: clean re all c u s p