#include <stdio.h>

/**
 * Auth: PDM
 * FileName: 1-args.c
 * main - Print the number of arg
 * @argv - the number of argument sup to prog
 * @argc - an array pointer to the argument
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
