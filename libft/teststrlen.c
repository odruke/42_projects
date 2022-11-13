#include <stdio.h>
#include "mylib.h"

int main(int ac, char **av)
{
    if (ac > 1)
    {
        printf("en mi funcion, str tiene %d tamano\n", ft_strlen(av[1][0]))
        printf("en mi funcion, str tiene %d tamano", strlen(av[1][0]))
    }
}