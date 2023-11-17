#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char *)s1 != (unsigned char *)s2)
			return (*s1 - *s2);
		i++;
			
	}
	return (*s1 - *s2);
}
