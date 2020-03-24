#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to list head
 * @idx: index
 * @n: data
 *
 * Return: pointer ot new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *t;
	listint_t *new;

	if (head == NULL)
		return (NULL);
	t = *head;
	for (i = 0; idx > 0 && t && i < idx - 1; i++)
	{
		if (t == NULL)
			return (NULL);
		t = t->next;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = t->next;
	t->next = new;
	return (new);
}
