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
	listint_t *tmp;

	if (head == NULL)
		free(head);

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
