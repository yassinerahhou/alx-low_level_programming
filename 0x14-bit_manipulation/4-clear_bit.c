#include "main.h"

/**
 * clear_bit - sets the value
 * @n: pointer to the number
 * @index: index of the bit
 *
 * Return: always 1 for success else -1 .
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
