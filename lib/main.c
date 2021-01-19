#include "libft/libft.h"
#include "libex/libex.h"
// #include <stdio.h>
// #include <stdlib.h>
#include <fcntl.h>

int get_next_line(int fd, char **line);

int main(void)
{
	int fd = open("test.txt", O_RDONLY);
	char *line;

	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	printf("%s\n", line);
	free(line);
	return (0);
}
