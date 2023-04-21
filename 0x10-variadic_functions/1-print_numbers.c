#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers- a function that prints numbers
 *@separator: string
 *@n: number
 *Return: null
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list y;
unsigned int i;
int result;
va_start(y, n);
for (i = 0; i < n; i++)
{
result = va_arg(y, int);
printf("%d", result);
if (separator == NULL)
{
continue;
}
else if (i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(y);
}
