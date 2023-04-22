#include "libft.h"
#include <string.h>

int	main()
{
//	char	*a = "copia esta cadena";
//	char	*b = "";
	char	*c = "copia esta cadena";
	char	d[18] = "";

//	strlcpy(b, a, ft_strlen(a) + 1);
//	printf("original para b: %s\n", b);
	ft_strlcpy(d, c, 18);
	printf("b: %s\n", d);
}
