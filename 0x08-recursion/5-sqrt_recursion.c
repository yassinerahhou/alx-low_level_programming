#include "main.h"

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
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: n
 * Return: natural square value
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (_sqrt_value(n, 0));
}
