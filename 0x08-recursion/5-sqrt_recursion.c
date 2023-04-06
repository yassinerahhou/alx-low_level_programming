#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_value - search for the square value of n beginning
 * @n: number
 * @value:value
 * Return: natural square value //zakaria elaroussi
 */

int _sqrt_value(int n, int value)
{
if (value * value > n)
return (-1);

if (value * value == n)
return (value);

return (_sqrt_value(n, value + 1));
}
/**
 * _sqrt - Entry Function
 * @n: integer
 * @i: integer
 * Return: the square root
 */
int _sqrt(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i < n)
return (_sqrt(n, i + 1));
else
return (-1);
}
