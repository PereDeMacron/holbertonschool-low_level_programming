#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string recursively.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	 {
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}

