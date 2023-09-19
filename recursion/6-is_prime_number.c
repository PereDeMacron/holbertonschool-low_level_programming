#include "main.h"

/**
 * is_divisible - Helper function to check if number is divisible by a divisor.
 * @num: The number to check.
 * @div: The divisor to check.
 *
 * Return: 0 if the number is divisible, 1 otherwise.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
	return (0);

	if (div == num / 2)
	return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 0 if the number is not prime, 1 if the number is prime.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	return (0);

	if (n >= 2 && n <= 3)
	return (1);

	return (is_divisible(n, div));
}
