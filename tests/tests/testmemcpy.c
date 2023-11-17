//#include <stdio.h>
//#include <string.h>
#include "libft.h"
int main()
{
//	int	i;
//	char c;
	char lstr[27] = "cadena de caracteres larga";
	char sstr[27];


	if (ft_memcpy(sstr, lstr, strlen(lstr)+1) == memcpy(sstr, lstr, strlen(lstr+1)))
	{
		printf("BINGO!");
	}
	else
	{
		printf ("nope, keep trying\n\n");
/*		printf ("ERROR OUTPUT:\n");
		printf ("my function:");
		printf ("original function:");
*/	}
}
