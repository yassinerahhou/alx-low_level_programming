#include "main.h"
/**
 * _print_rev_recursion - Entry Function
 * @s: char
 * Return: Always 0 (SUCCESS)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
