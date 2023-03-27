#include "main.h"

/**
 * swap_int- a function that swaps the values of two integers.
 * @a: integer to swap
 * @b: integer to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int yass;

	yass = *a;
	*a = *b;
	*b = yass;
}
