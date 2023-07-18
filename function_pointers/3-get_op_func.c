#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * asked by the user.
 * @s: The operator passed as an argument to the program.
 *
 * Return: A pointer to the function that corresponds to the operator,
 *         or NULL if the operator is not valid.
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		return (ops[i].f);
		i++;
	}

	return (NULL);
}
