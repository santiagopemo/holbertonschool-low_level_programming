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
	listint_t *t;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
		return (1);
	}
	for (i = 0; i < (index - 1); i++, *head = (*head)->next)
	{
		if ((*head)->next == NULL)
			return (-1);
	}
	t = (*head)->next;
	(*head)->next = t->next;
	free(t);
	return (1);
}
