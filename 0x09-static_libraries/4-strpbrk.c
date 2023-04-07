#include "main.h"
/**
 * *_strpbrk -  function that searches a string for any of a set of bytes.
 * @s: This is a pointer to the string / char
 * @accept: This is a pointer to the string
 * Return: s or Null (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int i, y;
for (i = 0 ; s[i] != 0; i++)
{
for (y = 0; accept[y] != 0; y++)
if (s[i] == accept[y])
{
return (&s[i]);
}
}
return (0);
}
