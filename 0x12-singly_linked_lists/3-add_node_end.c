#include "lists.h"

/**
 * add_node_end -  function that adds a new node at the beginning of a list
 * @head: head list pointer
 * @str: string
 *
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;
	list_t *tmp;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
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
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	for (; tmp->next;)
		tmp = tmp->next;
	tmp->next = new;
	return (tmp);
}
