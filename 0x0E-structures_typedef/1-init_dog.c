#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to a dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
