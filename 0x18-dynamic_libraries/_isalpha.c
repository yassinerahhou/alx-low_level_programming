#include "main.h"

/**
 * _isalpha - checks if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if c is lowercase or upercase, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
