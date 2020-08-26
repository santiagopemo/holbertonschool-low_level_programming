#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in
 * an array of integers using the interpolation search
 * @array: Pointer to the first element of the array to search in
 * @size: Is the number of elements in array
 * @value: Value to search for
 * Return: if value is not present in array or if array
 * is NULL, your function the function return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high, n, pos;

	if (array == NULL)
		return (-1);
	n = size;
	low = 0;
	high = n - 1;
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					 (value - array[low]));
		if (pos >= n || pos < 0)
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	/* if (array[low] == value)*/
	/*	return (low);*/
	return (-1);
}
