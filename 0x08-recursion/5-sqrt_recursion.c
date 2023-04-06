#include "main.h"
int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Entry Function
 * @n: input number.
 * @c: iterator.
 * Return: square root or -1.
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
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
