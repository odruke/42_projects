#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	if (little == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		if(big[i] == little[i2])
		{
			i2 = 0;
			while (big[i + i2] == little[i2])
				i2++;
			if (little[i2] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
