#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _putchar - writes the character chjjkukj_u
 * @c: The character to print h
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set
 */
int _putchar(char c)
{
return (write(1, &c, sizeof(char)));
}
