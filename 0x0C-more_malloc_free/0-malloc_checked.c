#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function de merd
 *@b:  unsigned int
 * Return: always 0
 */

void *malloc_checked(unsigned int b)
{
void *x = malloc(b * sizeof(char));

if (x == NULL)
{
exit(98);
}
return (x);
}
