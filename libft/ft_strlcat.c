#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{	
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dst[d] && d < size)
		d++;
	while (src[s])
	{
		dst[d + s] = src[s];
		s++;
	}
	dst[d + s] = '\0';
	return (ft_strlen(src) + ft_strlen(dst));
}
