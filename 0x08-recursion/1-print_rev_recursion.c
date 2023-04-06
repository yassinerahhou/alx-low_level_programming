#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: char
 * Return: Always 0 (SUCCESS)
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
