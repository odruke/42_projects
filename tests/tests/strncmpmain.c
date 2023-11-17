#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
			
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

int	main()
{
	char s1[] = "son iguales";
	char s2[] = "son iguales";
	char s3[] = "son diferentes";

	printf("funcion nativa\n");
	printf("iguales es 0: %i\n",strncmp(s1, s2, ft_strlen(s1)));
	printf("3 es mas grande: %i\n",strncmp(s1, s3,ft_strlen(s1)));
	printf("1 es mas pequeña: %i\n",strncmp(s3, s1,ft_strlen(s1)));
	printf("--------------------------\n");
	printf("funcion propia\n");
	printf("iguales es 0: %i\n",ft_strncmp(s1, s2, ft_strlen(s1)));
	printf("3 es mas grande: %i\n",ft_strncmp(s1, s3,ft_strlen(s1)));
	printf("1 es mas pequeña: %i\n",ft_strncmp(s3, s1,ft_strlen(s1)));


}
