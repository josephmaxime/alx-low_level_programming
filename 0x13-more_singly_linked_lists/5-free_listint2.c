#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - set the head to NULL.
 *
 * @head: array list.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		if (*head == NULL)
			free(*head);
		else
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
	}
	*head = NULL;
}
