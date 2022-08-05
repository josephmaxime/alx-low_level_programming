#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - add the elements at the end of a dlistint_t list.
 *
 * @head: pointer to doubly linked list.
 * @index: value of index.
 *
 * Return: address of new element or nul if failed.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
