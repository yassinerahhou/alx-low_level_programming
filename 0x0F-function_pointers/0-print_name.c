#include <stdlib.h>
/**
 * print_name - print name fonction
 * @name: the name
 * @f: pointurs to funtion
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
