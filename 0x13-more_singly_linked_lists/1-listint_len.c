#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 * Return: The number of the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t prelin = 0;
while (h != NULL)
{
prelin++;
h = h->next;
}
return (prelin);
}
