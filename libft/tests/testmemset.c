#include <stdio.h>
#include "mylib.h"
#include <string.h>

int main()
{
	char str[50] = "los puntos vienen aqui detras de mi";
	printf("en mi ft str vale %s\n", ft_memset(str + 22,'.', 8*sizeof(char)));
	printf("original vale %s\n", memset(str + 22, '.', 8*sizeof(char)));
}
