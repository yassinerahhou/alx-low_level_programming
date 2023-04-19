#include <stddef.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  function to entry
 * @array: input integry array
 * @size: size of the array
 * @cmp: -1. If size <= 0, return -1.
 *
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (!array || !cmp || size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
