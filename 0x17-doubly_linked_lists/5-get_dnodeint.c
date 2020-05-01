#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of list
 * @head: pointer to dlistint_t list
 * @index: index
 *
 * Return: the nth node, NULL if does no exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; head = head->next, i++)
	{
		if (index == i)
			return (head);
	}
	return (NULL);
}
