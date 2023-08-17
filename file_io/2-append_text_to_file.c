#include "main.h"

/**
 * append_text_to_file - Append text to a file
 * 
 * @filename: The filename
 * @text_content: Content to append
 * 
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
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

    /* Open the file for writing in append mode */
    file_descriptor = open(filename, O_WRONLY | O_APPEND);
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
