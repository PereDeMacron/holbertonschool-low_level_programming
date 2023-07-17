#include "function_pointers.h"

/**
 * print_name - function to print the name
 *
 * @name: name of the guy
 * @f: float
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
