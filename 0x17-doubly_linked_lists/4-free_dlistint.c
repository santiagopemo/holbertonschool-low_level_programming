#include "lists.h"

/**
 * free_dlistint - function that free a dlistint_t list
 * @head: pointer to the head of a dlistint_t list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = NULL;

	for (; head; head = next)
	{
		next = head->next;
		free(head);
	}
}
