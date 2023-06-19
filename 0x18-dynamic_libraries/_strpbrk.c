#include "main.h"
/**
 * *_strpbrk -  function that searchfvrv
 * @s: This is a pointer to the string
 * @accept: This is a pointer to the string yjyju
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
int j = 0;
int i = 0;
while (s[i] != '\0')
{
i++;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
return (0);
}
