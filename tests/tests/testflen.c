#include "libft.h"
static int	flen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		n *= -1;
	while(n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	main()
{
	int	n;

	n = -123456;
	printf("%d\n", flen(n));
	
}
