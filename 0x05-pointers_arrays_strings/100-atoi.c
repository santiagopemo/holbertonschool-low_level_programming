#include "holberton.h"

/**
 * _atoi - find numbers
 * @s:char
 * Return: int
 */
int _atoi(char *s)
{
	int i, sign, my_num, teens;
	char find_num = 'N';

	teens = 1;
	sign = 1;
	i = 0;
	while (*(s + 1) != '\0')
	{
		if (*(s + i) == '-')
			sign *= -1;
		if (*(s + i) >= '0' && *(s + i) <= '9' && find_num == 'N')
		{
			find_num = 'Y';
			/*first_num = i;*/
			my_num = *(s + i) - '0';
			teens = 10;
		}
		if (*(s + i) >= '0' && *(s + i) <= '9' && find_num == 'Y')
		{
			/*last_num = i;*/
			my_num *= teens;
			my_num += (*(s + i) - '0');
			teens *= 10;
		}
		if (*(s + i) < '0' && *(s + i) > '9' && find_num == 'Y')
			break;
	}
	return (my_num);
}
