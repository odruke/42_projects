#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;
	unsigned char	fnd;
	
	str = (unsigned char *)s;
	fnd = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == fnd)
			return((void *)&str[i]);
		i++;
	}
	return (NULL);
}

int	main()
{
	int	talla;
	char	str[] = "encuentra la x";

	talla = ft_strlen(str);
	printf("funcion propia\n");
	printf("la x esta aqui: %p\n", ft_memchr(str, 'c', talla));
	printf("---------------\n");
	printf("funcion nativa\n");
	printf("la x esta aqui: %p\n", memchr(str, 'c', talla));
}
