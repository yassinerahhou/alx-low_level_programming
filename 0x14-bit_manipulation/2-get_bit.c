#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @index: index of the bit
 * @n: number to search
 * Return: always return tovalue of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_v;

	if (index > 63)
		return (-1);

	bit_v = (n >> index) & 1;

	return (bit_v);
}
