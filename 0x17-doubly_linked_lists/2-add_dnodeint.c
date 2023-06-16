#include "lists.h"

/**
 * add_dnodeint - adds a new node
 * @head: the head of the doubly linked list
 * @n: the new value
 * Return: the address of the new element

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	if (*head)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
