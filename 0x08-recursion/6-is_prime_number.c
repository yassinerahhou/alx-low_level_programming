#include "main.h"

/**
 * is_number - detects if an input number is prime number
 * @n: integer
 * @a: integer
 * Return: 1 if n is a prime number. 0 if not
 */

int is_number(unsigned int n, unsigned int a)
{
if (n % a == 0)
{
if (n == a)
return (1);
else
return (0);
}
return (0 + is_number(n, a + 1));
}

/**
 * is_prime_number - Write a function that returns 1 if the input integer
 * @n: integer
 * @i: integer
 * Return: 1 if n is a prime number 0
 */

int is_prime_number(int n)
{
if (n == 0)
return (0);
if (n < 0)
return (0);
if (n == 1)
return (0);
return (is_number(n, 2));
}
