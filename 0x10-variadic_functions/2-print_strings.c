#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string separator
 * @n: number of arguments
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *p;

	if (separator == NULL)
		return;
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(valist, char *);
		printf("%s%s", p == NULL ? "(nil)" : p, i < (n - 1) ?
				separator : "\n");
	}
	va_end(valist);
}
