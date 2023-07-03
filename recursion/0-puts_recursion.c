#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line recursively.
 * @s: Pointer to the string to print.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
