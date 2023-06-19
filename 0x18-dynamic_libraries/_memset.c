#include "main.h"
/**
 * _memset - function that fills the first nhyjuyju
 * @n: number of bytes
 * @b: constant byte jkukiki
 * @s: memory lhohi
 * Return: s pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
