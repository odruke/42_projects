#include "stdio.h"
#include <ft_printf.h>
#include "stdlib.h"
#include "string.h"
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

	i = 42;
	u = 42;
	hex = 12341427;
	c =  'a';
	ptr = &i;
	str = (char *)malloc(15 * sizeof(char));
	if (!str)
	{
		printf("allocation failed");
		return (0);
	}

	strcpy(str, "something here");

	printf("\ndef========\n");
	len1a = printf("this is char %%c\n->%c<-\n", c);
	ft_printf("\nown========\n");
	len1b = ft_printf("this is char %%c\n->%c<-\n", c);
	comparelen(len1a, len1b);
	printf("\n\n\n");

	printf("def==========\n");
	len2a = printf("this is string %%s\n->%s<-\n",str);
	ft_printf("\nown========\n");
	len2b = ft_printf("this is string %%s\n->%s<-\n",str);
	comparelen(len2a, len2b);
	printf("\n\n\n");

	printf("def========\n");
	len3a = printf("this is void pointer %%p\n->%p<-\n",(void *)ptr);
	printf("\nown========\n");
	len3b = ft_printf("this is void pointer %%p\n->%p<-\n",(void *)ptr);
	comparelen(len3a, len3b);
	printf("\n\n\n");

	printf("\ndef========\n");
	len4a = printf("this is int %%i\n->%i<-\n", i);
	ft_printf("\nown========\n");
	len4b = ft_printf("this is int %%i\n->%i<-\n", i);
	comparelen(len4a, len4b);
	printf("\n\n\n");

	printf("\ndef========\n");
	len5a = printf("this is int %%d\n->%d<-\n", i);
	ft_printf("\nown========\n");
	len5b = ft_printf("this is int %%d\n->%d<-\n", i);
	comparelen(len5a, len5b);
	printf("\n\n\n");

	printf("\ndef========\n");
	len6a = printf("this is hex%%x\n->%x<-\n", hex);
	ft_printf("\nown========\n");
	len6b = ft_printf("this is hex%%x\n->%x<-\n", hex);
	comparelen(len6a, len6b);
	printf("\n\n\n");

	printf("\ndef========\n");
	len7a = printf("this is hex%%X\n->%X<-\n", hex);
	ft_printf("\nown========\n");
	len7b = ft_printf("this is hex%%X\n->%X<-\n", hex);
	comparelen(len7a, len6b);
	printf("\n\n\n");

	printf("\ndef========\n");
	len8a = printf("this is unsigned%%u\n->%u<-\n", u);
	ft_printf("\nown========\n");
	len8b = ft_printf("this is unsigned%%u\n->%u<-\n", u);
	comparelen(len8a, len8b);
	printf("\n\n\n");

//	printf("\ndef========\n");
//	len9a = printf(" NULL %s NULL ", NULL);
//	ft_printf("\nown========\n");
	len9b = ft_printf(" NULL %s NULL ", NULL);
	printf("\n");
	comparelen(len9a, len9b);
	printf("\n\n\n");

//	printf("\ndef========\n");
//	len10a = printf(" %p %p ", 0, 0);
//	ft_printf("\nown========\n");
	len10b = ft_printf(" %p %p ", 0, 0);
	printf("\n");
	comparelen(len10a, len10b);
	printf("\n\n\n");

//	printf("\ndef========\n");
//	len11a = printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
//	ft_printf("\nown========\n");
	len11b = ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	printf("\n");
	comparelen(len11a, len11b);
	printf("\n\n\n");

//	printf("\ndef========\n");
//	len12a = printf("what is happening %u here ", -1);
//	ft_printf("\nown========\n");
	len12b = ft_printf(" %u ", -1);
	printf("\n");
	comparelen(len12a, len12b);
	printf("\n\n\n");
/*
	printf("===========\n");
	printf("this is string with a 20 width %%20s\n->%20s<-\n",str);
	printf("===========\n");
	printf("this is string with a 20 width padded with 0 with '0' flag %%020s\n->%020s<-\n",str);
	printf("===========\n");
	printf("this is string with a 20 width left aligned with '-' %%-20s\n->%-20s<-\n",str);
	printf("===========\n");
	printf("this is string with a '.' flag for restiction to 9 %%.9s\n->%.9s<-\n",str);
	printf("===========\n");
	printf("this is void pointer %%p\n->%p<-\n",(void *)str);
	printf("===========\n");
	printf("this is integer %%d\n->%d<-\n",42);
	printf("===========\n");
	printf("this is integer %%i\n->%i<-\n",42);
	printf("===========\n");
	printf("this is positive integer with '+' flag%%+i\n->%+i<-\n",42);
	printf("===========\n");
	printf("this is negative integer with '+' flag%%+i\n->%+i<-\n",-42);
	printf("===========\n");
	printf("this is octal %%i\n->%i<-\n",52);
	printf("===========\n");
	printf("this is unsigned integer  %%u\n->%u<-\n",42);
	printf("===========\n");
	printf("this is hexadecimal %%x\n->%x<-\n",42);
	printf("===========\n");
	printf("this is hexadecimal in alternative form with '#' flag %%#x\n->%#x<-\n",42);
	printf("===========\n");
	printf("this is percentage symbol %%\n->%%<-\n");

*/
	free(str);}
