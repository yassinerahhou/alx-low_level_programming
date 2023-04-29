#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t.
 * @head: Pointer to a pointer .
 * @n: Value to be stored in the new node.
 * Return: Address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_n = malloc(sizeof(listint_t));
listint_t *temp = *head;

if (new_n == NULL)
return (NULL);

new_n->n = n;
new_n->next = NULL;
if (*head == NULL)
{
*head = new_n;
}
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = new_n;
}
return (new_n);
}
