#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates
 * @s1: chat
 * @s2: chart 2
 * Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
int x, f, c, t;
char *o;

if (s1 == NULL)
{
s1 = "";
}
for (x = 0; s1[x] != '\0'; x++)
{
}
if (s2 == NULL)
{
s2 = "";
}
for (f = 0; s2[f] != '\0'; f++)
{
}
o = malloc(sizeof(char) * (x + f + 1));
if (o == NULL)
{
return (NULL);
}
for (c = 0; c < x; c++)
{
o[c] = s1[c];
}
for (t = 0; t < f; t++)
{
o[c] = s2[t];
c++;
}

return (o);
}
