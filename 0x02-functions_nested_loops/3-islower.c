#include "main.h"
/**
 * _islower - checks if a character is a lowercase letter in ASCII
 * @c: the character to check
 *
 * Return: 1 if c is a lowercase letter, 0 otherwise
 */
int _islower(int c)
{
if (c >= 97  && c <= 122)
return (1);
else
return (0);
}
