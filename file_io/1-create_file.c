#include "main.h"

/**
 * create_file - create a file with rw perm
 * 
 * @filename : the filename
 * @text_content : content
 */


int create_file(const char *filename, char *text_content)
{
    int o, w, len = 0;

    /*if no file return error*/
    if (filename == NULL)
        return (-1);

    /*if text content is not NULL(empty) */
    if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
    /*Create (O_CREAT) *filename* with rw-|---|---(0600)*/
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

    /*if Open or Write = -1 return Error*/
	if (o == -1 || w == -1)
		return(-1);

    /*Close opened file*/
	close(o);

    /*return no error 1=success*/
	return (1);
}