#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * @size: unsigne of our arra
 * @c: char
 * Return: 0 or 1
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *Y;

	Y = malloc(size);
	if (!size || !Y)
		return (NULL);
	for (i = 0; i < size; i++)
		Y[i] = c;
	return (Y);
}
