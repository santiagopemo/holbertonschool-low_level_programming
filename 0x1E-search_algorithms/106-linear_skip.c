#include "search_algos.h"

/**
 * linear_skip - function that searches for a value in
 * an array of integers using the jump search
 * @list: Pointer to the first element of the list to search in
 * @value: Value to search for
 * Return: if value is not present in array or if array
 * is NULL, your function the function return -1
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *i, *tmp;

	if (list == NULL)
		return (NULL);
	for (i = tmp = list; tmp->next != NULL && tmp->n < value;)
	{
		i = tmp;
		if (tmp->express == NULL)
		{
			for (; tmp->next != NULL; tmp = tmp->next)
				continue;
			break;
		}
		tmp = tmp->express;
		printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i->index, tmp->index);
	for (; i != NULL && i->n <= value; i = i->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", i->index, i->n);
		if (i->n == value)
			return (i);
	}
	return (NULL);
}
