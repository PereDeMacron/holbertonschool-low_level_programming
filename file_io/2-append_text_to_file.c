#include "main.h"

/**
 * append_text_to_file - write append a file
 * 
 * @filename : the filename
 * @text_content : content
 */


int append_text_to_file(const char *filename, char *text_content)
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
    /*Open *filename* (O_WriteONLY) and (O_APPEND)*/
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

    /*if Open or Write = -1 return Error*/
	if (o == -1 || w == -1)
		return (-1);

    /*Close opened file*/
	close(o);

    /*return 1 = success*/
	return (1);
}