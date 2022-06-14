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
	listint_t *node = *head;
	listint_t *nxt = NULL;

	if (*head == NULL)
	{
		free(node);
		return (NULL);
	}

	while (node != NULL)
	{
		nxt = node->next;
		node->next = prv;
		prv = node;
		node = nxt;
	}

	*head = prv;
	return (*head);
}
