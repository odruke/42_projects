
#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	char	str[] = {'%', 'c', 'o', 's', 'a', 's', '%'};
	int	n;

	n = ft_printf(str);
	printf("hay %i o mas coincidencias", n);
}
