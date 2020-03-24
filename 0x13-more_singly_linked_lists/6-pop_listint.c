#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * @head: pointer to head of list
 *
 * Return: heads node data
 */
int pop_listint(listint_t **head)
{
	listint_t *t = *head;
	int data;
	
	if (t == NULL)
		return (0);
	data = (*head)->n;
	*head = t->next;
	free(t);
	return (data);
}
