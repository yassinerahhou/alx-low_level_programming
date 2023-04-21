#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function to print
 * @format: string
 * Return: return to zero
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *str;
va_list args;
va_start(args, format);
while (format == NULL)
{
printf("\n");
return;
}
while (format[i] != 0)
{
witch (format[i])
{
case 99:
printf("%c", (char) va_arg(args, int));
break;
case 105:
printf("%d", va_arg(args, int));
break;
case 102:
printf("%f", (float) va_arg(args, double));
break;
case 115:
str = (char *) va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
}
if ((format[i] == 99 || format[i] == 102 || format[i] == 105 ||
format[i] == 115) && format[(i + 1)] != '\0')
printf(", ");
i++;
}printf("\n");va_end(args);
}
