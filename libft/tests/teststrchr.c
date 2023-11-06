#include "libft.h"

int	main()
{
	char	str[] = "encuentra la letra x";
	printf ("FUNCION PROPIA:\naqui la x: %s\naqui el caracter null de la string: %s\naqui no encuentro nada:%s\n",ft_strchr(str, 'x'),ft_strchr(str, '\0'),ft_strchr(str,'w'));
	printf ("FUNCION NATIVA:\naqui la x: %s\naqui el caracter null de la string: %s\naqui no encuentro nada:%s\n",strchr(str, 'x'),strchr(str, '\0'),strchr(str,'w'));
}
