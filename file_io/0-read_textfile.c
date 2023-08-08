#include "main.h"


/**
 * read_textfile - open and read file
 * 
 * @filename : the filename
 * @letters : number of letters
 */

int read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (fd == -1 || r == -1 || w == -1)
		return(0);

	free(buf);
	close(fd);

	return (w);
}