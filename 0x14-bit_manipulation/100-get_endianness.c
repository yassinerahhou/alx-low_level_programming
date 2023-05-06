#include "main.h"
/**
 * get_endianness - function that cat by yassin
 * Return: always 0 if else 1
 */
int get_endianness(void)
{
	unsigned int my_var = 1;
	char *ptr = (char *)&my_var;

	if (*ptr)
		return (1);
	else
		return (0);
}
