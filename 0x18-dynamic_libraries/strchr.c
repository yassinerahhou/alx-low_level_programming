#include "main.h"
/**
 * *_strchr - function that locates a character in a string.
 * @s: This is a pointer to the string
 * @c: This is the character //Zakaria Elaroussi
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (0);
}
