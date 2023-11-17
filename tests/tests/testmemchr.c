#include "libft.h"

int	main()
{	
	int talla;
	char str[]  = "encuentra la x";

	talla = ft_strlen(str);
	printf("la x esta aqui: %d",ft_memchr(str, 'c', talla));
}
