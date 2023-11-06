#include <stdio.h>
#include <ctype.h>
#include "mylib.h"

int main(int ac, char **av)
{
    if (ac > 1)
		printf("MY FUNCTIONS\n\n");
        if (ft_isalpha(av[1][0]))
        {
            printf ("%c es letra\n", av[1][0]);
        }
        if (ft_isdigit(av[1][0]))
        {
            printf ("%c es numero\n", av[1][0]);
        }	
		if (ft_isalnum(av[1][0]))
        {
            printf ("%c es alphanumerico\n", av[1][0]);
        }
        if (ft_isascii(av[1][0]))
        {
            printf ("%c es ascii\n", av[1][0]);
		}
		if (ft_isprint(av[1][0]))
		{
			printf ("%c es imprimible\n\n\n", av[1][0]);
		}
		printf("ORIGINAL FUNCTIONS\n\n");
		if (isalpha(av[1][0]))
            printf ("%c es letra\n", av[1][0]);

        if (isdigit(av[1][0]))
            printf ("%c es numero\n", av[1][0]);

		if (isalnum(av[1][0]))
            printf ("%c es alphanumerico\n", av[1][0]);

        if (isascii(av[1][0]))
            printf ("%c es ascii\n", av[1][0]);

		if (isprint(av[1][0]))
			printf ("%c es imprimible\n", av[1][0]);
}
