#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: double pointer to dlistint_t list head
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	for (; tmp; tmp = tmp->next, i++)
	{
		if (i == index)
			break;
	}
	if (i != index && tmp == NULL && index != 0)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
