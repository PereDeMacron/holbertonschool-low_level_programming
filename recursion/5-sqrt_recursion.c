#include "main.h"

/**
 * find_sqrt - Helper function to find the square root recursively.
 * @num: The number to find the square root of.
 * @root: The current root value.
 *
 * Return: The square root of the number if found, -1 otherwise.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	return (root);

	if (root == num / 2)
	return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Calculates the square root of a number recursively.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of the number if found, -1 if the number is negative.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	return (-1);

	if (n == 1)
	return (1);

	return (find_sqrt(n, root));
}
