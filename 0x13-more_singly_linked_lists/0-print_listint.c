#include "lists.h"
/**
 * print_listint - print all .
 * @h: pointer .
 * size_t : size of rawdaw .
 * listint_t: list iin .
 * Return: back to int.
 **/
size_t print_listint(const listint_t *h)
{
	size_t rawdaw = 0;
while (h != NULL)
{
	printf("%d\n", h->n);
		h = h->next;
	rawdaw++;
}
return (rawdaw);
}
