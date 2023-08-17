#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - create a file with read and write permissions
 * 
 * @filename: the filename
 * @text_content: content to write to the file
 * 
 * Return: 1 if successful, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int file_descriptor, bytes_written, len = 0;

    /* Check if filename is NULL */
    if (filename == NULL)
        return (-1);

    /* Calculate length of text_content */
    if (text_content != NULL)
    {
        for (len = 0; text_content[len]; len++)
            ;
    }

    /* Create or truncate the file with read and write permissions (0600) */
    file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (file_descriptor == -1)
        return (-1);

    /* Write text_content to the file */
    bytes_written = write(file_descriptor, text_content, len);
    if (bytes_written == -1)
    {
        close(file_descriptor);
        return (-1);
    }

    /* Close the file */
    if (close(file_descriptor) == -1)
        return (-1);

    /* Return 1 to indicate success */
    return (1);
}
