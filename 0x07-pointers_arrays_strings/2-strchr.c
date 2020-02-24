#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: char to find
 * Return: first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			break;
		s++;
	}
	if (*s == '\0')
		return ('\0');
	else
		return (s);
}
