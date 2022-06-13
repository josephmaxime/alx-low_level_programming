#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - add a new node at the given position.
 *
 * @head: pointer of linked list.
 * @n: integer of node.
 * @idx: index of position.
 * Return: return address of a new elements, or NULL if is failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *prv, *nxt;
	listint_t *node_idx = *head;
	unsigned int count;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		if (idx == 0)
			return (tmp);
		else
			return (NULL);
	}

	node_idx = *head;
	count = 0;
	while ((node_idx->next) && (count < idx))
	{
		count++;
		prv = node_idx;
		node_idx = node_idx->next;
	}
	nxt = node_idx;
	prv->next = tmp;
	tmp->next = nxt;

	if (idx > count)
		return (NULL);

	return (tmp);
}
