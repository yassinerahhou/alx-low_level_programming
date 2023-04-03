#include "main.h"
/**
* _memset - memset function
* @s :point of string to changee
* @b : value that we will put
* @n : number of bits
* Return : change  pointer to @s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
