#include "libft.h"

int	main()
{
	char	*str;
	str = (char *)malloc(15 * sizeof(char));
	if (!str)
	{
		printf("allocation failed");
		return (NULL)
	}
	str = "something here";
	printf("===========\n");
	printf("this is char\n->%c<-\n",'a');
	printf("===========\n");
	printf("this is string\n->%s<-\n",s);
	printf("===========\n");
	printf("this is void pointer\n->%p<-\n",s);
}
