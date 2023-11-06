	/* ************************************************************************** */
	/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: druke <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:31:39 by druke             #+#    #+#             */
/*   Updated: 2023/07/19 06:36:31 by druke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*f_free(char **str)
{
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*f_readbuf(int fd, char *storage)
{
	int	rid;
	char	*buffer;

	rid = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if(!buffer)
		return(f_free(&storage));
	while (rid > 1 && !ft_strchr(buffer, '\n'))
	{
		rid = read(fd, buffer, BUFFER_SIZE);
		if (rid > 0)
		{
			buffer[rid] = '\0';
			storage = ft_strjoin(storage, buffer);
		}
	}
	free(buffer);
	if (rid == -1)
		return (f_free(&storage));
	return (storage);
}

char	*f_next_line(char *storage)
{
	int	len;
	char	*next_line;
	char	*ptr;

	ptr = ft_strchr(storage, '\n');
	len = (ptr - storage) + 1;
	next_line = ft_substr(storage, 0, len);
	if (!next_line)
		return (NULL);
	return (next_line);
}

char	*f_cln_storage(char *storage)
{
	char	*new_storage;
	char	*ptr;
	int	len;

	ptr = ft_strchr(storage, '\n');
	if (!ptr)
	{
		new_storage = NULL;
		return (f_free(&storage));
	}
	else
		len = (ptr - storage) + 1;
	new_storage = ft_substr(storage, len, ft_strlen(storage) - len);
	f_free(&storage);
	if (!new_storage)
		return (NULL);
	return (new_storage);
}

char	*get_next_line(int fd)
{
	static char	*storage = {0};
	char		*line;

	if (fd < 0)
		return (NULL);
	if ((storage && ft_strchr(storage, '\n')) || !storage)
	{
		storage = f_readbuf(fd, storage);
	}
	if (!storage)
		return (NULL);
	line = f_next_line(storage);
	if (!line)
		return (f_free(&storage));
	storage = f_cln_storage(storage);
	return (line);

}
