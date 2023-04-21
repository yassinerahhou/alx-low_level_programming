#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints
 * @separator: the string to be printed between the strings
 * @n: the number of args
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;

	va_start(strings, n);

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(strings, char*);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");


		if ((separator != NULL) && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}

