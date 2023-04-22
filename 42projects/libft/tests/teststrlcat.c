#include "libft.h"

int	main()
{
	char	a[] = "este es el principio ";
//	char	b[] = "y este es el final";
	char	c[] = "este es el principio ";
	char	d[] = "y este es el final";
	size_t	len = ft_strlen(c) + ft_strlen(d);
//	printf("retorno original: %i\n", strlcat(a, b, ft_strlen(a)));
	printf("retorno propia: %li\n", ft_strlcat(c, d,len));
	printf("longitud teorica: %li\n", len);
	printf("original: %s\npropia: %s\n", a, c);
}
