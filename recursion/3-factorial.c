#include "main.h"

/**
 * factorial - Calculates the factorial of a number recursively.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of the number, or -1 if n is negative.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
	return (-1);

	else if (n >= 0 && n <= 1)
	return (1);

	result *= factorial(n - 1);

	return (result);
}
