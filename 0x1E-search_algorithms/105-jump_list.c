#include "search_algos.h"

/**
 * jump_list - function that searches for a value in
 * an array of integers using the jump search
 * @list: Pointer to the first element of the list to search in
 * @size: Is the number of elements in array
 * @value: Value to search for
 * Return: if value is not present in array or if array
 * is NULL, your function the function return -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t n = 0, m = 0, a = 0;
	listint_t *i = NULL, *tmp = NULL;

	if (list == NULL)
		return (NULL);
	n = size;
	for (i = tmp = list; tmp->index < n - 1 && tmp->n < value;)
	{
		i = tmp;
		m += sqrt(n);
		for (; tmp->next != NULL && tmp->index < m; tmp = tmp->next, a++)
			continue;
		printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i->index, tmp->index);
	for (; i != NULL && i->index < n && i->n <= value; i = i->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", i->index, i->n);
		if (i->n == value)
			return (i);
	}
	return (NULL);
}
