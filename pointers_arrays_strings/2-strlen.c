#include "main.h"

/**
 *
 * _strlen - returns the length of a string
 *
 */
int _strlen(const char *str)
{
		int length = 0;

			while (*str++)
						length++;

				return (length);
}
