#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle haystack
 * @haystack: char
 * @needle: char
 *
 * Return: needle or NULL (SUCCESS)
 */
char *_strstr(char *haystack, char *needle)
{
int i, y;
for (i = 0 ; haystack[i] != '\0' ; i++)
{
for (y = 0 ; needle[y] != '\0' ; y++)
{
if (haystack[i + y] != needle[y])
{
break;
}
}
if (needle[y] == '\0')
{
return (haystack + i);
}
}
return (0);
}
