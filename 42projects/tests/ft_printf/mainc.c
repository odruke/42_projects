
#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	char	str[7] = "%%%%%%";
	int	n;

	n = ft_printf(str);
	printf("hay %i  coincidencias", n);
}
