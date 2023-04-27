#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - function that returns the number of list
 * @h: A pointer to the head node
 * Return: bacck to count_n
 */
size_t list_len(const list_t *h)
{
size_t count_n = 0;
int x = 0;
for (x = 0 ; h != NULL ; x++)
{
count_n++;
h = h->next;
}
return (count_n);
}
