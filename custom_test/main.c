#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../ft_printf.h"
#include "../libft/libft.h"
#include "limits.h"

int main (void)
{
	int i1, i2, i3;
	// printf("%i", ft_count_hex((void *)-1));
	i1 = printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	printf("\n");
	i2 = ft_count_hex(ULONG_MAX);
	i3 = ft_count_hex(-ULONG_MAX);
	// i2 = ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	printf("\n");
	// printf("Pritf returns %d, My printf returns %d\n", i1, i2);
	printf("\nPritf returns %d, count hex returns %d an %d", i1, i2, i3);
	// printf ("ft_number_digit returns: %d", ft_number_digit((unsigned int)4294967295));
	return (0);
}