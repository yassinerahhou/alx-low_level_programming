#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: Pointer to the array to search
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index where the target is located or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
if (array == NULL)
return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
