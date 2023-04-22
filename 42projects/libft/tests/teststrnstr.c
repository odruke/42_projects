#include "libft.h"


int	main()
{
	char	grande[] = "busca la palabra clave en esta frase";
	char	mini[] = "clave";
	char	fail[] = "aqui no esta";
	char	cero[] = "";

/*	printf("funcion nativa:\n");
	printf("la palabra clave esta aqui: %s\n", strnstr(grande, mini, ft_strlen(grande)));
	printf("la palabra clave no esta aqui: %s\n", strnstr(grande, fail, ft_strlen(grande)));
	printf("la palabra clave esta aqui: %s\n", strnstr(grande, cero, ft_strlen(grande)));
	printf("-----------------------------------\n");
*/printf("funcion propia:\n");
	printf("la palabra clave esta aqui: %s\n", ft_strnstr(grande, mini, ft_strlen(grande)));
	printf("la palabra clave no esta aqui: %s\n", ft_strnstr(grande, fail, ft_strlen(grande)));
	printf("la palabra clave esta aqui: %s\n", ft_strnstr(grande, cero, ft_strlen(grande)));
}

