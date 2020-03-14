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

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(valist, char *);
			if (p == NULL)
				printf("(nil)");
		printf("%s%s", p == NULL ? "(nil)" : p, separator != NULL
				&& i < (n - 1) ? separator : "\n");
	}
	va_end(valist);
}
