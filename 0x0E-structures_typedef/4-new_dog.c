#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copy the string
 * @dest: destination
 * @src: string
 * Return: char
  */
char *_strcpy(char *dest, char *src)
{
		int i, j;

	for (i = 0; *(src + i); i++)
		continue;
	for (j = 0; j <= i; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
/**
 * _strlen - return the length of string
 * @s: string pointer
 * Return: nothing
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to a dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog)
	{
		dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
		if (dog->name)
		{
			dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
				if (dog->owner)
				{
					_strcpy(dog->name, name);
					dog->age = age;
					_strcpy(dog->owner, owner);
					return (dog);
				}
				else
					free(dog->name);
		}
		free(dog);
	}
	return (NULL);
}
