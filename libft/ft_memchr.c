#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;
	unsigned char	fnd;

	str = (unsigned char *)s;
	fnd = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == fnd)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
