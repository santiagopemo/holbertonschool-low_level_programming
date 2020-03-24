#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: double pointer ot head of list
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *t, *next;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	t = *head;
	for (i = 0; t && i < index - 1 ; i++, t = t->next)
		continue;
	if (t || i == index - 1)
	{
		next = t->next;
		t->next = next->next;
		free(next);
		return (1);
	}
	return (-1);
}
