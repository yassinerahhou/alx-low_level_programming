#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - function to print
 * @format: string
 * Return: return to zero
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *st;
va_list argsz;

va_start(argsz, format);
while (format == NULL)
{
printf("\n");
return;
}
while (format[i] != 0)
{
switch (format[i])
{
case 99:
putchar((char) va_arg(argsz, int));
break;
case 105:
printf("%d", va_arg(argsz, int));
break;
case 102:
printf("%f", (float) va_arg(argsz, double));
break;
case 115:
st = (char *) va_arg(argsz, char *);
if (st == NULL)
{
printf("(nil)");
break;
}
printf("%s", st);
break;
}
if ((format[i] == 99 || format[i] == 102 || format[i] == 105 ||
format[i] == 115) && format[(i + 1)] != '\0')
printf(", ");
i++;
}
printf("\n");
va_end(argsz);
}
