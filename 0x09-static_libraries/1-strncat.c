#include "main.h"
/**
 * *_strncat- converts a string to an integer
 * @dest: string to be converted
 * @src: jfjffkkfk
 * @n: intg
 * Return: the int converted from the string
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; src[j] != '\0' && j < n; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
