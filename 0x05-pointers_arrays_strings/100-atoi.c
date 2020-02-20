#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - find numbers
 * @s:char
 * Return: int
 */
int _atoi(char *s)
{
	int i, sign, my_num, teens;
	char find_num = 'N';

	my_num = 0;
	teens = 10;
	sign = 1;
	i = 0;
	if (s)
	{
		while (*(s + i) != '\0')
		{
			if (*(s + i) == '-')
				sign *= -1;
			if (*(s + i) >= '0' && *(s + i) <= '9' && find_num == 'N')
			{
				find_num = 'Y';
				my_num = *(s + i) - '0';
			}
			else if (*(s + i) >= '0' && *(s + i) <= '9' && find_num == 'Y')
			{
				my_num *= teens;
				my_num += (*(s + i) - '0');
			}
			else if ((*(s + i) < '0' || *(s + i) > '9') && find_num == 'Y')
			{
				break;
			}
			i++;
		}
	}
	return (sign * my_num);
}
