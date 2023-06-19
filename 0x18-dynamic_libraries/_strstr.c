#include "main.h"

/**
 * *_strstr - function that locates a substring.
 * @haystack: This is a pointer to the string
 * @needle: This is a pointer to the substring jjki hgdgdgd
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *x = haystack;
char *y = needle;
while (*y != '\0' && *x == *y)
{
x++;
y++;
}
if (*y == '\0')
{
return (haystack);
}
haystack++;
}
return (0);
}
