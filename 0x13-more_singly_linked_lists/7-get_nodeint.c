#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the ode of a linked list.
 * @head: pointer to the head of the list
 * @index: index, starting at 0
 * Return: pointer to the nth node.
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *raw = head;
unsigned int i = 0;
while (raw != NULL && i <= index)
{
if (i == index)
return (raw);
raw = raw->next;
i++;
}
return (NULL);
}
