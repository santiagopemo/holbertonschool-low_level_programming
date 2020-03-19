#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to head of list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp = head;
	list_t *next;

	while (tmp)
	{
		next = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = next;
	}
	free(head);
}
