#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free all the elements of a dlistint_t list.
 *
 * @head: pointer to doubly linked list.
 *
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		free(head);

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
