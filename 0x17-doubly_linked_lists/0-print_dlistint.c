#include "lists.h"

/**
 * print_dlistint - prints all the distint
 * @h: a pointer to the  head
 * Return: the numbes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		len++;
	}

	return (len);
}
