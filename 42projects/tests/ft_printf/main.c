#include "stdio.h"
//#include <ft_printf.h>
#include "stdlib.h"
#include "string.h"
int	main()
{
	char	*str;
	str = (char *)malloc(15 * sizeof(char));
	if (!str)
	{
		printf("allocation failed");
		return (0);
	}
	strcpy(str, "something here");
	printf("===========\n");
	printf("this is char %%c\n->%c<-\n",'a');
	printf("===========\n");
	printf("this is string %%s\n->%s<-\n",str);
	printf("===========\n");
	printf("this is void pointer %%p\n->%p<-\n",(void *)str);
	printf("===========\n");
	printf("this is integer %%d\n->%d<-\n",42);
	printf("===========\n");
	printf("this is integer %%i\n->%i<-\n",42);
	printf("===========\n");
	printf("this is octal %%i\n->%i<-\n",52);
	printf("===========\n");
	printf("this is unsigned long %%u\n->%u<-\n",42);
	printf("===========\n");
	printf("this is hexadecimal %%x\n->%x<-\n",42);
	printf("===========\n");
	printf("this is percentage symbol %%\n->%%<-\n");


	free(str);
}
