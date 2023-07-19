#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "get_next_line.h"

int	main(int ag, char **av)
{
	if (ag > 2)
	{
		int	nlines;
		char	*path;
		int	fd;

		if (!isdigit(*av[1]))
		{
			printf("please insert a positive number as first argument\n");
			return (0);
		}
		nlines = atoi(av[1]);
		if (nlines <= 0)
		{
			printf("first argument must be a positive number\n");
			return (0);
		}
		path = av[2];
		if (!path)
		{
			printf("please, insert text path in the second argument\n");
			return (0);
		}
		fd = open(path, O_RDONLY);
		while (nlines > 0)
		{
			get_next_line(fd);
			nlines--;
		}
		close(fd);
	}
	else
	{
		printf("incorrect number of arguments\n");
		return (0);
	}
}
