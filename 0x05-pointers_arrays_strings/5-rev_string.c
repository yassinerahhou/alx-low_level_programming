#include "main.h"
#include <string.h>

/**
 * rev_string - unction that reverses a string.
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
int len = strlen(s);
int i, j;
char tmp;
for (i = 0, j = len - 1; i < j; i++, j--)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
}
}
