#include "function_pointers.h"

/**
 * array_iterator - Entry Function
 * @array: array.
 * @size: size of the array.
 * @action: pointer to the function.
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
unsigned int i;
if (!array || !action)
for  i = 0, i < size ; i++)

{
(*action)(array[i]);
}
}
