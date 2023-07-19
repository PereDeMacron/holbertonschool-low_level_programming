#include "variadic_functions.h"

void print_all(const char * const format, ...)
{













}

	
void print_char(va_list arg) //(letter)//
{
	char letter = va_arg(arg, int);
	printf("%c", letter);
}

void print_int(va_list arg) //(num)//
{
	int num = va_arg(arg, int);
	printf("%d", num);
}

void print_float(va_list arg) //(num)(double)//
{
	double num = va_arg(arg, double);
	printf("%f", num);
}

void print_string(va_list arg) //(*str) (* char)//
{
	char *str = va_arg(arg, char *);
	printf("%s", (str != NULL) ? str : "(nil)");
}
