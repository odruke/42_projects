#include "stdio.h"
//#include <ft_printf.h>
#include "stdlib.h"

int	main()
{
	char	*str;
	str = (char *)malloc(15 * sizeof(char));
	if (!str)
	{
		printf("allocation failed");
		return (0);
	}
	str = "something here";
	printf("===========\n");
	printf("this is char\n->%c<-\n",'a');
	printf("===========\n");
	printf("this is string\n->%s<-\n",str);
	printf("===========\n");
	printf("this is void pointer\n->%p<-\n",(void *)str);
	printf("===========\n");
	printf("this is decimal\n->%d<-\n",42);
	printf("===========\n");
	printf("this is integer\n->%i<-\n",42);
	printf("===========\n");
	printf("this is unsigned long\n->%u<-\n",42);
	printf("===========\n");
	printf("this is hexadecimal\n->%x<-\n",42);
	printf("===========\n");
	printf("this is percentage symbol\n->%%<-\n", '%');


	free(str);
}
