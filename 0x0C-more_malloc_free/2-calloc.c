#include <stdlib.h>
/**
 * *_calloc - function
 * @size: unsigned int size
 * @nmemb: unsigned int nmemb
 * Return: always 0 succes
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pt;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
pt = malloc(nmemb * size);
if (!pt)
return (NULL);
for (i = 0; i < nmemb * size; i++)
{
pt[i] = 0;
}
return ((void *)pt);

}
