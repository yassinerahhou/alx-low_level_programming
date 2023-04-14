#include "main.h"
#include <stdlib.h>
/**
 * array_range - Fuction rang
 * @min: char
 * @max: char
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int len, i, *ar;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ar = malloc(sizeof(int) * len);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ar[i] = min + i;
	return (ar);
}
