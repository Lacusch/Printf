#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../ft_printf.h"
#include "../libft/libft.h"
#include "limits.h"

int main (void)
{
	int i1, i2;
	i1 = printf(" %u ", 134);
	printf("\n");
	i2 = ft_printf(" %u ", 134);
	printf("\n");
	printf("Pritf returns %d, My printf returns %d\n", i1, i2);
	return (0);
}