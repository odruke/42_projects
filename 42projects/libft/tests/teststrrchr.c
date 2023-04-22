#include "libft.h"

int	main()
{
	char	str[] = "encuentra la letra x";

	printf ("FUNCION PROPIA:\n");
	printf ("encuentra la letra x\n");
	printf ("aqui la x: %s\n", ft_strrchr(str, 'x'));
	printf ("aqui el caracter null de la string: %s\n", ft_strrchr(str, '\0'));
	printf ("aqui no encuentro nada:%s\n", ft_strrchr(str,'w'));
	printf ("error de francinette:%s\n", ft_strrchr(str,'t' + 256));
	printf ("error 2 de francinette:%s\n", ft_strrchr(str, 1024));
	printf ("FUNCION NATIVA:\n");
	printf ("encuentra la letra x\n");
	printf ("aqui la x: %s\n", strrchr(str, 'x'));
	printf ("aqui el caracter null de la string: %s\n", strrchr(str, '\0'));
	printf ("aqui no encuentro nada:%s\n", strrchr(str,'w'));
	printf ("error de francinette:%s\n", strrchr(str,'t' + 256));
	printf ("error 2 de francinette:%s\n", strrchr(str, 1024));
}
