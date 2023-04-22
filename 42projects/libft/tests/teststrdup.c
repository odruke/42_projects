#include "libft.h"

char    *ft_strdup(const char *s)
{
	size_t  i;
	char    *d;

	i = 0;
	d = (char *)malloc((ft_strlen(s) + 1) * sizeof (char));
	if (!d)
		return (NULL);
	while (i < ft_strlen(s))
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

int	main()
{
	char	a[10] = "cadena";
	char	*b;
	b = ft_strdup(a);
	printf("%s\n", b);
}
