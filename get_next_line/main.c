/* Библиотеки для main */
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	char	*line;
	int		fd;

	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	if (!line)
		printf("%s", line);
	while (line)
	{
		printf("%s", line);
		free (line);
		line = get_next_line(fd);
	}
	return (0);
}
