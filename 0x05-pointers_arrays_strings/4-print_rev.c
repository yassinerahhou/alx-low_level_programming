#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: string
 * Return: void
 */
#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: string
 * Return: void
 */
void    print_rev(char *s)
{
int    i;
int    n;

n = 0;
while (s[n] != '\0')
n++;
i = n - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
