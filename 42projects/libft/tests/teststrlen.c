#include <stdio.h>
#include "mylib.h"
#include <string.h>

int main()
{
	char	frase[] = "muchas mas cosas234234./././@#@";
    {
        printf("en mi funcion, str tiene %lu tamano\n", ft_strlen(frase));
        printf("en mi funcion, str tiene %lu tamano", strlen(frase));
    }
}
