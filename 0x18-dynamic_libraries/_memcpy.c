#include "main.h"
/**
 * *_memcpy - function 
 * @dest: This is a pointer to 
 * @src: This is a pointer 
 * @n: number of bytes to 
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
