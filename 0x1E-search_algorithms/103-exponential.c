#include "search_algos.h"

/**
 * exp_binary_search - function that searches for a value in
 * an array of integers using the binary search
 * @array: Pointer to the first element of the array to search in
 * @low: low position in array
 * @high: high position in array
 * @value: Value to search for
 * Return: if value is not present in array or if array
 * is NULL, your function the function return -1
 */
int exp_binary_search(int *array, int low, int high, int value)
{
	int middle, i;

	if (array == NULL)
		return (-1);
	for (; low <= high;)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		middle = low + (high - low) / 2;
		if (array[middle] == value)
			return (array[middle]);
		if (array[middle] < value)
			low = middle + 1;
		else
			high = middle - 1;
	}
	return (-1);
}
/**
 * exponential_search - function that searches for a value in
 * an array of integers using the exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: Is the number of elements in array
 * @value: Value to search for
 * Return: if value is not present in array or if array
 * is NULL, your function the function return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int n, i, min;

	if (array == NULL)
		return (-1);
	n = size;
	if (array[0] == value)
		return (0);
	for (i = 1; i < n && array[i] <= value; i *= 2)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	if (i < n)
		min = i;
	else
		min = n - 1;
	printf("Value found between indexes [%d] and [%d]\n", (i / 2), min);
	return (exp_binary_search(array, (i / 2), min, value));
}
