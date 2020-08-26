#include "search_algos.h"

/**
 * jump_search - function that searches for a value in
 * an array of integers using the jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Is the number of elements in array
 * @value: Value to search for
 * Return: if value is not present in array or if array
 * is NULL, your function the function return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int i, n, m;

	if (array == NULL)
		return (-1);
	n = size;
	m = sqrt(n);
	for (i = 0; array[m] < value;)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = m;
		m += sqrt(n);
		if (m >= n)
			break;
	}
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	printf("Value found between indexes [%d] and [%d]\n", i, m);
	for (; array[i] <= value && i < n; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
