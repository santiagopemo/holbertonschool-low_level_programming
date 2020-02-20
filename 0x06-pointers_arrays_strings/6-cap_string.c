#include "holberton.h"

/**
 * cap_string - capitaliza letters
 * @c: char
 * Return: string
 */
char *cap_string(char *c)
{
	int i = 0;
	while (*(c + i))
	{
		
		if (*(c + 0) >= 'a' && *(c + 0) <= 'z')
			*(c + 0) -= 32;
		if ((*(c + i) == ' ' || *(c + i) == '\t' || *(c + i) == '\n' ||
			*(c + i) == ',' || *(c + i) == ';' || *(c + i) == '.' 
			|| *(c + i) == '!' || *(c + i) == '?' || *(c + i) == 34
			|| *(c + i) == '(' || *(c + i) == ')' 
			|| *(c + i) == '{' || *(c + i) == '}'))
		{
			if (*(c + (i + 1)) <= 'z' && *(c + (i + 1)) >= 'a')
				*(c + (i + 1)) -= 32;
		}
		i++;
	}
	return (c);
}
