#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -  function that deletes the head node.
 * @head: Pointer to a pointer
 * Return: head node's data (n)  if head is NULL.
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *tmp;
if (*head == NULL)
{
return (0);
}
tmp = (*head)->next;
data = (*head)->n;
free(*head);
*head = tmp;
return (data);
}

