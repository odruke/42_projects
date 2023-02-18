#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	res;
	int	i;
	
	sign = 1;
	res = 0;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		if (ft_isdigit(nptr[i + 1]))
		{
			res = res * 10 + (nptr[i] - 48);
			i++;
		}
		else
		{
			res = res * 10 + (nptr[i] - 48);
			return (res * sign);
		}
	}
	return (res * sign);
}
