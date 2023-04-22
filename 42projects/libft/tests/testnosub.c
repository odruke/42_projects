#include "libft.h"
static int	nosubstr(const char *s, char del)
{
	int	i;
	int	nosub;
	int	check;

	check = 0;
	i = 0;
	nosub = 0;
	while (s[i])
	{
		if (s[i] == del)
			check = 0;
		if (s[i] != del && check == 0)
		{
			check = 1;
			nosub++;
		}
		i++;
	}
	return (nosub);
}
int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		char	*str;
		char	del = ' ';
		
		str = argv[1];
		printf("la frase es:\n%s\n", str);
		printf("en la frase hay %d palabras\n", nosubstr(str, del));
	}
}
