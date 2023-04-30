#include "lists.h"

/**
 * sum_listint - calculate sum of all data in a listint_t
 * @head: pointeur to head node
 *
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sums;

	tmp = head, sums = 0;
	while (tmp)
		sums += tmp->n, tmp = tmp->next;

	return (sums);
}
