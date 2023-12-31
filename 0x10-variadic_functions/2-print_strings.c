#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: the string to be printed between numbers.
 * @n: number of parameters.
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list argp;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(argp, n);
	while (i--)
		printf("%s%s", (str = va_arg(argp, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(argp);
}
