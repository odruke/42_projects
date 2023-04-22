#include "libft.h"

int	main()
{
/*	char	*s1;
	char	*s2;

	s1 = "";
	s2 = "";
*/
	printf("funcion original%p\n", memmove(((void*)0), ((void*)0), 5));
	printf("funcion propia%p\n", ft_memmove(((void*)0), ((void*)0), 5));
}
