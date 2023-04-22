#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	if (little == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		if(big[i] == little[i2])
		{
			i2 = 0;
			while (big[i + i2] == little[i2])
				i2++;
			if (little[i2] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

int	main()
{
	char	grande[] = "encuentra la palabra clave aqui";
	char	mini[] = "clave";
	char	fail[] = "aqui no esta";
	char	cero[] = "";

	printf("la palabra clave esta aqui: %s\n", ft_strnstr(grande, mini, ft_strlen(grande)));
	printf("la palabra clave no esta aqui: %s\n", ft_strnstr(fail, mini, ft_strlen(fail)));
	printf("aqui no hay nada: %s\n", ft_strnstr(grande, cero, ft_strlen(grande)));

}
