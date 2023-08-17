#include "main.h"

/**
 * read_textfile - Read and display contents of a file
 * 
 * @filename: The filename
 * @letters: Number of letters to read and display
 * 
 * Return: The number of letters read and displayed, or 0 on failure
 */
int read_textfile(const char *filename, size_t letters)
{
    int fd, r, w;
    char *buf;

    buf = malloc(sizeof(char) * letters);
    if (buf == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        free(buf);
        return (0);
    }

    r = read(fd, buf, letters);
    if (r == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    w = write(STDOUT_FILENO, buf, r);
    if (w == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    free(buf);
    close(fd);

    return (w);
}
