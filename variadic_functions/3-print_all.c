#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Print a char.
 * @args: va_list args.
 */
void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}

/**
 * print_integer - Print a integer.
 * @args: va_list arg.
 */
void print_integer(va_list args)
{
	int num = va_arg(args, int);

	printf("%d", num);
}

/**
 * print_float - Print a float.
 * @args: va_list arg.
 */
void print_float(va_list args)
{
	double num = va_arg(args, double);

	printf("%f", num);
}

/**
 * print_string - Print a string.
 * @args: va_list arg.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char*);

	if (str == NULL)
	str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Print anything.
 * @format: ...
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *separator = "";

	void (*print_func[])(va_list) = {
		print_char,
		print_integer,
		print_float,
		print_string
	};

	char *format_symbols = "cifs";

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (format_symbols[j] != '\0')
		{
			if (format[i] == format_symbols[j])
			{
				printf("%s", separator);
				print_func[j](args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

