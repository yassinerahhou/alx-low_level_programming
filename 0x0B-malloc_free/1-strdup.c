#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - function  returns a pointer.
 * @str: string chqr
 * Return: always 0
 */


char *_strdup(char *str)

{
char *copy_s;
int x;
int y;
if (str == NULL)
{
return (0);
}
for (x = 0; str[x] != '\0'; x++)
{
}
copy_s = malloc((x + 1) * sizeof(char));
if (copy_s == NULL)
{
return (0);
}
for (y = 0; y <= x; y++)
{
copy_s[y] = str[y];
}
return (copy_s);
}
