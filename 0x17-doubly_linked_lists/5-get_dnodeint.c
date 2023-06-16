#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t 
 * @head: the head pointer
 * @index: the index of the node
 * Return: the node or NULL
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}
	return (head);
}
