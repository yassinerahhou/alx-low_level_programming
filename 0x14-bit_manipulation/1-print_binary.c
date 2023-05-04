#include "main.h"
/**
 * print_binary - print equivalent of a decimal number
 * @n: number to print
 */
#include <stdio.h>

void print_binary(unsigned long int n)
{
unsigned long int curr = 1ul << (sizeof(unsigned long int) * 8 - 1);
int started = 0;
while (curr)
{
if (n & curr)
{
started = 1;
putchar('1');
}
else if (started)
{
putchar('0');
}
curr >>= 1;
}
if (!started)
{
putchar('0');
}
}
