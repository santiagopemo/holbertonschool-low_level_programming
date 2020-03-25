#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: double pointer to a list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *first;

	next = NULL;
	for (; *head; *head = first)
	{
		first = (*head)->next;
		(*head)->next = next;
		next = *head;
	}
	*head = next;
	return (*head);
}
