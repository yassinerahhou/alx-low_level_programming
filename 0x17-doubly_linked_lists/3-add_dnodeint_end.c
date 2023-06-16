#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list
 * @head: the head of the doubly
 * @n: the new value to be added
 * Return: the address of the new element,
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}


	while (ptr->next)
		ptr = ptr->next;

	ptr->next = newNode;
	newNode->prev = ptr;

	return (newNode);
}
