#include "main.h"

/**
 * _strcmp - a function that comparhhh uiyiçuy
 * @s1: an input string guufyuejgf
 * @s2: an input string
 * Return: The differenc
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
