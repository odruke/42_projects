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
		printf("return FAIL\n");
}
int	main()
{
	char	*str;
	int len1a;
	int len1b;
	int len2a;
	int len2b;
	int len3a;
	int len3b;

	str = (char *)malloc(15 * sizeof(char));
	if (!str)
	{
		printf("allocation failed");
		return (0);
	}
	strcpy(str, "something here");
	printf("def========\n");
	len1a = printf("this is char %%c\n->%c<-\n",'a');
	ft_printf("own========\n");
	len1b = ft_printf("this is char %%c\n->%c<-\n",'a');
	comparelen(len1a, len1b);

	printf("def==========\n");
	len2a = printf("this is string %%s\n->%s<-\n",str);
	ft_printf("own========\n");
	len2b = ft_printf("this is string %%s\n->%s<-\n",str);
	comparelen(len2a, len2b);
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
