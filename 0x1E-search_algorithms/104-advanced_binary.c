#include "search_algos.h"

/**
 * advanced_binary - function that searches for a value in
 * an array of integers using the Linear search
 * @array: Pointer to the first element of the array to search in
 * @size: Is the number of elements in array
 * @value: Value to search for
 * Return: if value is not present in array or if array
 * is NULL, your function the function return -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int low, high, middle, i;

	if (array == NULL)
		return (-1);
	for (low = 0, high = size - 1; low <= high;)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		middle = low + (high - low) / 2;
		if (array[middle] < value)
			low = middle + 1;
		else if (array[middle] > value)
			high = middle - 1;
		else if (low != middle)
			high = middle;
		else
			return (middle);
	}
	return (-1);
}
