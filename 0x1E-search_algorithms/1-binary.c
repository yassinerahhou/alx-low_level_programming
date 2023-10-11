#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: Pointer to the array to search
 * @size: The size of the array
 * @value: The value to search for
 * Return: The index where the target is located or -1 if not found.
 */


int binary_search(int *array, size_t size, int value)
{
int left = 0;
int right = size - 1;

while (left <= right)
{
int i;
int mid;
printf("Searching in array: ");
for (i = left; i < right; i++)
{
printf("%d, ", array[i]);
}
printf("%d\n", array[right]);
mid = left + (right - left) / 2;

if (array[mid] == value)
{
return (mid);
}
else if (array[mid] < value)
{
left = mid + 1;
}
else
{
right = mid - 1;
}
}
return (-1);
}
