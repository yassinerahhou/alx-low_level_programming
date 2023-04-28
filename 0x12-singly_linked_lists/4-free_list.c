#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_list - function xx.
 * @head: Pointer.
 * Return: back to zero
 */
void free_list(list_t *head)
{
list_t *current = head;
list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
