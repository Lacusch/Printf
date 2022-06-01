#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../ft_printf.h"
#include "../libft/libft.h"
#include "limits.h"

int main (void)
{
	int i1, i2;
	char* s;
	s = "Test string ;)";
	printf ("Base printf:\n");
	i1 = printf("%s", s);
	printf("\n");
	printf ("The return value of printf is %i\n", i1);
	printf ("My printf:\n");
	i2 = ft_printf("%s", s);
	printf("\n");
	printf ("The return value of printf is %i\n", i2);
	return (0);
}