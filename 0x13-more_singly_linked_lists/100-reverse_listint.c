#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse linked list.
 * Return: return first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *nxt = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}

	while ((*head) != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prv;
		prv = (*head);
		(*head) = nxt;
	}

	*head = prv;
	return (*head);
}
