#include "main.h"
/**
 * puts2 - Pritns every other character of a string
 * @str: the string to be print
 * Return: Nothing
 */

void puts2(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
