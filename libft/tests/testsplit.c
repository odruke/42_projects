#include "libft.h"
/*
static int	sblen(char *s, int start, char del)
{
	int	size;

	size = 0;
	while (s && *s != del)
	{
		size++;
		s++;
	}
	return (size);
}
*/
int	main()
{
	char	frase[] = "     estas    son      las palabras";
	char	**temp;
//	int	len;

//	len = sblen(frase, 0, ' ');
	printf("-----------------TEST 1\n");
	temp = ft_split(frase, ' ');
	printf("%s\n", temp[0]);
	printf("%s\n", temp[1]);
	printf("%s\n", temp[2]);
	printf("%s\n", temp[3]);
	printf("caracter NULL||%s||\n", temp[4]);
//	printf("nada aqui||%s||\n", temp[5]);
	free (temp);
	printf("-----------------TEST 2\n");
	temp = ft_split(frase, 'x');
	printf("%s\n", temp[0]);
	printf("%s\n", temp[1]);
	printf("%s\n", temp[2]);
//	printf("%s\n", temp[3]);
//	printf("-----------------\n");
//	printf("error||%s||\n", temp[4]);
	free (temp);
	printf("-----------------TEST 3\n");
	temp = ft_split("", 'x');
	printf("%s\n", temp[0]);
	printf("%s\n", temp[1]);
	printf("%s\n", temp[2]);
//	printf("%s\n", temp[3]);
//	printf("-----------------\n");
//	printf("error||%s||\n", temp[4]);
}
