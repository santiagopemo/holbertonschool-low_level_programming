#include "lists.h"

/**
 * list_len - prints the number of elements of a list_t list
 * @h: pointer to the head of a singly linked list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
