#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node
 * @head: to the pointer
 * @str: string to be added
 * Return: back to NULL
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *str_dup;
int len = 0;
int j = 0;

	if (!str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node )
		return (NULL);

	str_dup = strdup(str);
	if (!str_dup)
	{
		free(new_node);
		return (NULL);
	}

	for (j = 0 ; str[len] ; j++)
		len++;

	new_node->str = str_dup;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
