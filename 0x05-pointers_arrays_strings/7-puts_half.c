#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 1)
	{
		n = 1 + (len / 2);
	}
	else
	{
		n = len / 2;
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
