#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete head node.
 *
 * @head: pointer of array list.
 *
 * Return: node, or 0 if is failed.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node;

	if (*head == NULL)
		return (0);

	tmp = *head;
	node = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (node);
}
