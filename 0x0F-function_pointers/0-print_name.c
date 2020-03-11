#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: name
 * @f: function pointer to f
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
