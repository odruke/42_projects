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

int	main()
{
	char a[] = "a 123";
	char b[] = "-123";
	char c[] = " -123";
	char d[] = "- - 123";
	char e[] = "1e23";
	char f[] = "efg123";
	char g[] = "123eed";
	char h[] = "-+123";
	char i[] = "+ 123";
	char j[] = " +123";
	char k[] = "+-123";
	char l[] = "+- 123";


	printf("a en propia:%i\na en original:%i\n",ft_atoi(a),atoi(a));
	printf("---------------------\n");
	printf("b en propia:%i\nb en original:%i\n",ft_atoi(b),atoi(b));
	printf("---------------------\n");
	printf("c en propia:%i\nc en original:%i\n",ft_atoi(c),atoi(c));
	printf("---------------------\n");
	printf("d en propia:%i\nd en original:%i\n",ft_atoi(d),atoi(d));
	printf("---------------------\n");
	printf("e en propia:%i\ne en original:%i\n",ft_atoi(e),atoi(e));
	printf("---------------------\n");
	printf("f en propia:%i\nf en original:%i\n",ft_atoi(f),atoi(f));
	printf("---------------------\n");
	printf("g en propia:%i\ng en original:%i\n",ft_atoi(g),atoi(g));
	printf("---------------------\n");
	printf("h en propia:%i\nh en original:%i\n",ft_atoi(h),atoi(h));
	printf("---------------------\n");
	printf("i en propia:%i\ni en original:%i\n",ft_atoi(i),atoi(i));
	printf("---------------------\n");
	printf("j en propia:%i\nj en original:%i\n",ft_atoi(j),atoi(j));
	printf("---------------------\n");
	printf("k en propia:%i\nk en original:%i\n",ft_atoi(k),atoi(k));
	printf("---------------------\n");
	printf("l en propia:%i\nl en original:%i\n",ft_atoi(l),atoi(l));
	printf("---------------------\n");
}
