#include "get_next_line.h"

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	int fd;
	char *line;

	fd = open(argv[1], O_RDONLY);
	line = "hey";
	while (line)
	{
		line = get_next_line(fd);
		printf("%s", line);
	}
	close(fd);
	return (1);	
}
