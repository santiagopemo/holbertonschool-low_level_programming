#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string separator
 * @n: number of arguments
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(valist, int), i < (n - 1) ?
				separator : "\n");
	}
	va_end(valist);
}
