
#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main()
{
	char	str[21] = "lol this is a string";
	char	c;
	int	i;
	int	*ptr;

	c = 'a';
	i = 42;
	ptr = &i;

	ft_printf("the letter is %c\n", c);
	ft_printf("the string is ->%s<-, and the char is %c, and why not, another char %c\n", str, c, c);
	ft_printf("by the way, this is a number %i\n", INT_MAX);
	ft_printf("this is a void ptr %p\n", (void *)ptr);
}
