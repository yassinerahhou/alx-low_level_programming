#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include "lists.h"
/* By Yacin */
/**
 * print_list - prints all the elements of list
 * @h: pointer to the head .
 *
 * Return: back to count_n
 */
size_t print_list(const list_t *h)
{
size_t count_n = 0;
int c = 0;
for (c = 0 ; h != NULL ; c++)
{
if (h->str != NULL)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");

h = h->next;
count_n++;
}
return (count_n);
}
