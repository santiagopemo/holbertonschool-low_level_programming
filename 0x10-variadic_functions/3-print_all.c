#include "variadic_functions.h"

/**
 * priar - function that prints char
 * @c: va_list with argument
 *
 * Return: nothing
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, char));
}

/**
 * print_integer - function that prints integer
 * @i: va_list with argument
 *
 * Return: nothing
 */
void print_integer(va_list i)
{
	printf("%c", va_arg(i, int));
}

/**
 * print_float - function that prints float
 * @f: va_list with argument
 *
 * Return: nothing
 */
void print_float(va_list f)
{
	printf("%c", va_arg(f, float));
}

/**
 * print_string - function that prints string
 * @f: va_list with argument
 *
 * Return: nothing
 */
void print_float(va_list s)
{
	char *string = va_arg(s, char *);
	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}

/**
 * print_all - function that prints anything
 * @format: const pointer to a const
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	op_t options[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	}
	va_list valist;

	va_start(valist, format);
}
