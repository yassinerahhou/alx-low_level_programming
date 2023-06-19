#include "main.h"
/**
 * _strspn - function that gets the lengtdv
 * @s: This is a pointer to the string
 * @accept: This is a pointer to the strin
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j = 0, count = 0;
while (s[i])
{
while (accept[j])
{
if (s[i] == accept[j])
{
count++;
break;
}
j++;
}
if (!accept[j])
break;
i++;
j = 0;
}
return (count);
}
