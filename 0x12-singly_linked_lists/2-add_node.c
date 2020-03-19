#include "lists.h"

/**
 * add_node -  function that adds a new node at the beginning of a list_t list
 * @head: head list pointer
 * @str: string
 *
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;

	if (str == NULL)
		return (NULL);
	while (str[++len])
		continue;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
