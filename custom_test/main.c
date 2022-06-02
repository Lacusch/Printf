#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../ft_printf.h"
#include "../libft/libft.h"
#include "limits.h"

int main (void)
{
	int i1, i2;
	i1 = printf("This %p is even stranger", (void *)-1);
	printf("\n");
	i2 = ft_printf("This %p is even stranger", (void *)-1);
	printf("\n");
	printf("Pritf returns %d, My printf returns %d", i1, i2);
	return (0);
}