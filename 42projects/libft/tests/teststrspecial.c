#include "libft.h"

int 	main()
{
	char	as1[] = "1234";
	char	as2[] = "1234";
	char	ax[] = "1256";
	char 	*s1;
	char	*s2;
	s1 = as1[0];
	s2 = as2[0];
	
	while (*s1)
	{
		if ((unsigned char *)s1 != (unsigned char *)s2)
		{
			return (s1 - s2);
		}
		s1++;
		s2++;
		printf("s1 = %s\ns2 = %s\n",s1 ,s2);
	}
	return (*s1 - *s2);
}
