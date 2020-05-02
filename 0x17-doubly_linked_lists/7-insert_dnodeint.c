#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a position.
 * @h: pointer to dlistint_t linked list head
 * @idx: index
 * @n: data
 *
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int i = 0;

	for (; tmp && i < idx - 1; tmp = tmp->next, i++)
		continue;
	if (tmp || i == idx - 1 || idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		if (idx == 0)
		{
			new->next = *h;
			new->prev = NULL;
			if (new->next)
				new->next->prev = new;
			*h = new;
		}
		else
		{
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next = new;
			if (tmp->next)
				new->next->prev = new;
		}
		return (new);
	}
	return (NULL);
}
