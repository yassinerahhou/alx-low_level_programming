#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - Adds a new node containing
 * @head: A pointer to a pointer of the list.
 * @n: An integer value to be stored in the new node.
 * Return: If successful - a pointer to  newly .
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *p;
p = malloc(sizeof(listint_t));
if (p == NULL)
return (NULL);
p->n = n;
p->next = *head;
*head = p;
return (p);
}
