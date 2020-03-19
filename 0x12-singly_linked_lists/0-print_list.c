#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of a singly linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;
	char *s = "(nil)";
	int l = 0;

	for (i = 0; h; i++)
	{
		if (h->str != NULL)
		{
			s = h->str;
			l = h->len;
		}
		printf("[%d] %s\n", l, s);
		h = h->next;
	}
	return (i);
}
