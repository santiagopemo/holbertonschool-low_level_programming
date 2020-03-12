#include "function_pointers.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (unsigned char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x%s",*(p + i),(i == (num_bytes - 1) ? "\n" : " "));		
	}
	return(0);
}

