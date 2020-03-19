#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of a singly linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *t = h;
	char *s = "(nil)";
	int l = 0;

	for (i = 0; t; i++)
	{
		if (h[i].str != NULL)
		{
			s = t->str;
			l = t->len;
		}
		printf("[%d] %s\n", l, s);
		t = t->next;
	}
	return (i);
}
