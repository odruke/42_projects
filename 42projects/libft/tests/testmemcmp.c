#include "libft.h"
static int	compare(char *s1, char *s2)
{
/*	char	*big;
	char 	*little;
	if (ft_strlen(s1) > ft_strlen(s2))
	{
		big = s1;
		little = s2;
	}
	else
	{
		big = s2;
		little = s1;
	}
*/	int a;
	int b;
	a = ft_memcmp(s1, s2, 2);
	b = memcmp(s1, s2, 2);
	if (a != b)
		return (0);
	return (1);
}
int	main()
{
	char 	*big = "1234";
	char 	*little = "12";
	char 	*fail = "fail";
	
	if(!compare(big, little))
		printf("1 FAIL\n");
	printf("1 SUCCES\n");
	if(!compare(little, big))
		printf("2 FAIL\n");
	printf("2 SUCCES\n");
	if(!compare(big, fail))
		printf("3 FAIL\n");
	printf("3 SUCCES\n");
	if(!compare(fail, little))
		printf("4 FAIL\n");
	printf("4 SUCCES\n");
	if(!compare(little, fail))
		printf("5 FAIL\n");
	printf("5 SUCCES\n");
	if(!compare(fail, big))
		printf("6 FAIL\n");
	printf("6 SUCCES\n");

}
