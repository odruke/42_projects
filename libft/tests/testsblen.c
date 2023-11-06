#include "libft.h"

static int	sblen(char *s, int start, char del)
{
	int	size;

	size = 0;
	while (s[start] && s[start] != del)
	{
		size++;
		start++;
	}
	return (size);
}

int	main()
{
	char	str[] = "cuenta cinco ";

	printf("la palabra cinco tiene |%d| letras", sblen(str, 7, ' '));
}
