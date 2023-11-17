#include "libft.h"

int	main()
{
	char	*a = "===cosas===";
	char	*set = "=";
	printf("antes:\n%s\n\n", a);
	printf("despues:\n%s\n", ft_strtrim(a, set));
}
