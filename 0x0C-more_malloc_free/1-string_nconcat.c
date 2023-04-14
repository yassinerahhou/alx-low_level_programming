#include <stdlib.h>
/**
 * *string_nconcat - main function
 * @s1: string 1
 * @s2: string 2
 * @n: string 3
 * Return: always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int p1;
unsigned int p2;
unsigned int x;
unsigned int y;

if (!s1)
s1 = "";
if (!s2)
s2 = "";
for (x = 0; s1[x] != '\0'; x++)
{
}
for (y = 0; s2[y] != '\0' && y < n; y++)
{
}
str = malloc(sizeof(char) * (x + y + 1));
if (!str)
return (NULL);
for (p1 = 0; p1 < x; p1++)
{
str[p1] = s1[p1];
}
for (p2 = 0; p2 < y; p2++)
{
str[p1 + p2] = s2[p2];
}
str[p1 + p2] = '\0';
return (str);
}
