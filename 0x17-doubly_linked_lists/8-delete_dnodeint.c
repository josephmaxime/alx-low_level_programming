#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the elements at
 * the index of a dlistint_t list.
 *
 * @head: pointer to pointer of doubly linked list.
 * @index: position of a node to delete.
 *
 * Return: 1 if success, -1 if failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *next, *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
	}

	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}

	prev = current->prev;
	next = current->next;
	prev->next = next;
	next->prev = prev;

	free(current);

	return (1);
}
