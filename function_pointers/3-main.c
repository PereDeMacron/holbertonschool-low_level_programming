#include "3-calc.h"

/**
 * main - entry point
 *
 * @argc: ..
 * @argv: ..
 *
 * Return: Always 0 (Success)
 *
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (num2 == 0 && (operator[0] == '/' || operator[0] == '%'))
	{
		printf("Error\n");
		return (100);
	}

	func = get_op_func(operator);

	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
