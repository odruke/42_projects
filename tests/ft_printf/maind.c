#include "stdio.h"
#include "limits.h"

void	comparelen(int a, int b)
{
	if (a == b)
		printf("return SUCCES\n");
	else
	{
		printf("return FAIL\n");
		printf("def = %d\nown = %d\n",a, b);
	}
}
int	main()
{
	char	*str;
	char	c;
	int	hex;
	int	i;
	int	*ptr;
	unsigned int	u;
	int len1a;
	int len1b;
	int len2a;
	int len2b;
	int len3a;
	int len3b;
	int len4a;
	int len4b;
	int len5a;
	int len5b;
	int len6a;
	int len6b;
	int len7a;
	int len7b;
	int len8a;
	int len8b;
	int len9a;
	int len9b;
	int len10a;
	int len10b;
	int len11b;
	int len11a;
	int len12b;
	int len12a;

printf("\ndef========\n");
	len11a = printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	ft_printf("\nown========\n");
	len11b = ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	printf("\n");
	comparelen(len11a, len11b);
	printf("\n\n\n");