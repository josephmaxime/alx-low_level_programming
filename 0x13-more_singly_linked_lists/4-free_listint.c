#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free all the elements of the list.
 *
 * @head: array list.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		free(head);

	while (head)
	{
		free(head);
		head = head->next;
	}
}
