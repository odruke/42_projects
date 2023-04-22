#include "libft.h"
#include <bsd.h>

int	main()
{
	char	s[] = "algunas cosas";
	char	d[13] = "";
	char	s2[] = "algunas cosas";
	char	d2[13] = "";

	printf ("funcion ft");
	printf (" el tamaño de s es: %li\ns:%s\nd:%s",ft_strlcpy(d,s,13),s,d);
	printf ("funcion de base\n");
	printf (" el tamaño de s es: %li\ns:%s\nd:%s",strlcpy(d2,s2,13),s2,d2);

}
