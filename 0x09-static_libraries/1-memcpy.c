#include "main.h"
/**
 * _memcpy - function  copies memory area src to dest
 * @dest:  point of string to change
 * @src: value that will replace in dest
 * @n: number of bytes that i will change change
 * Return: changed pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
