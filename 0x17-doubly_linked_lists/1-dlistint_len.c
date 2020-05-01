#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements dlistint_t list
 * @h: pointer to dlistint_t list head
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
