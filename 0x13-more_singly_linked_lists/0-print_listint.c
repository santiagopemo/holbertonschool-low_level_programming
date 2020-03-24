#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: head list pointer
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *t = h;
	size_t nodes = 0;

	while (t)
	{
		printf("%d\n", t->n);
		nodes++;
		t = t->next;
	}
	return (nodes);
}
