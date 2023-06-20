#include "main.h"

/**
 * 1-alphabet.c - prints the alphabet in lowercase follow by new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}