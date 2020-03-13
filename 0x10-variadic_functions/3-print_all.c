#include "variadic_functions.h"

/**
 * print_char - function that prints char
 * @c: va_list with argument
 *
 * Return: nothing
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_integer - function that prints integer
 * @i: va_list with argument
 *
 * Return: nothing
 */
void print_integer(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
 * print_float - function that prints float
 * @f: va_list with argument
 *
 * Return: nothing
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - function that prints string
 * @s: va_list with argument
 *
 * Return: nothing
 */
void print_string(va_list s)
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
		{"s", print_string}
	};
	int i, j;
	va_list valist;
	char *separator;

	va_start(valist, format);
	i = 0;
	separator = "";
	while (*(format + i) && format)
	{
		j = 0;
		while (j < 4)
		{
			if (*(options + j)->op == *(format + i))
			{
				printf("%s", separator);
				(options + j)->f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
