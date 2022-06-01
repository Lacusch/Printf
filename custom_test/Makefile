
CC= cc
CFlags= -Wall -Wextra -Werror
DEPS = ../libftprintf.a ../ft_printf.h
NAME = test
LIBFT = ../libftprintf.a
all :$(NAME) c u s p x X procent

$(NAME):
	make -C ../
c:
	gcc char_test.c $(LIBFT) -o char_test.o

s:
	gcc string_test.c  $(LIBFT) -o string_test.o
p:
	gcc pointer_test.c  $(LIBFT) -o pointer_test.o
u:
	gcc unsigned_test.c $(LIBFT) -o unsigned_test.o
x:
	gcc hex_test_l.c $(LIBFT) -o hex_test_l.o
X:
	gcc hex_test_u.c $(LIBFT) -o hex_test_u.o
procent:
	gcc procent_test.c $(LIBFT) -o procent_test.o
clean: 
	rm -f *.o
re: clean all

.PHONY: clean re all c u s p x X procent