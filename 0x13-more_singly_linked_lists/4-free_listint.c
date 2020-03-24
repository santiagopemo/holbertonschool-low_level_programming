#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: pointer ho head of list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *t = head;
	listint_t *n;

	while (t)
	{
		n = t->next;
		free(t);
		t = n;
	}
}
