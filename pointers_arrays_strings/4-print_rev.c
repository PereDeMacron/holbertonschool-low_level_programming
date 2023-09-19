#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to the string to be printed.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
	}

	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
