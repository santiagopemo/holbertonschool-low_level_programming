#ifndef DOG_H
#define DOG_H

int _putchar(char c);
/**
 * struct dog - dog structure
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
