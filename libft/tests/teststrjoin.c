#include "libft.h"

int	main()
{
	char	*a = "pega esto";
	char 	*b = ".";
	char	*c = "al final de esto";

	printf("%s\n",ft_strjoin(ft_strjoin(a, b), c));
}
