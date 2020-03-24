#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to head of list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *t = *head;
	listint_t *n;

	while (t)
	{
		n = t->next;
		free(t);
		t = n;
	}
	*head = NULL;
}
