#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a pointer
 * @idx: where the new node should be added
 * @n: data of the nod.
 * Return: the address of the new node .
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *XNode = *head;
	listint_t *MANode = malloc(sizeof(listint_t));

	if (!MANode)
		return (NULL);

MANode->n = n;
MANode->next = NULL;
if (idx == 0)
	{
MANode->next = *head;
		*head = MANode;
		return (MANode);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (!XNode)
		{
			free(MANode);
			return (NULL);
		}
XNode = XNode->next;
	}

MANode->next = XNode->next;
XNode->next = MANode;

	return (MANode);
}
