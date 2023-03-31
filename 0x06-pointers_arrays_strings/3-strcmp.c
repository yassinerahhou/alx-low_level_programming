#include "main.h"

/**
 * _strcmp - a function that print n elem of array
 * @s1: pointer variable
 * @s2: variable
 * Return: void return nothing
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
