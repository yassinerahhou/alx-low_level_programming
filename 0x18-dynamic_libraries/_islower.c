#include "main.h"
/**
 * _islower - checks if a character
 * @c: the character
 *
 * Return: 1 if c is a lowercases
 */
int _islower(int c)
{
if (c >=97 && c <= 122)
	return(1);
else
	return(0);

}
