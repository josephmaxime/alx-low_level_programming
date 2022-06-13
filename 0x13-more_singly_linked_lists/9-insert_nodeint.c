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
	listint_t *tmp;
	listint_t *node_idx = *head;
	unsigned int count;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (*head);
	}

	node_idx = *head;
	count = 0;
	while (node_idx != NULL)
	{
		if (count == idx - 1)
		{
			tmp->next = node_idx->next;
			node_idx->next = tmp;
		}
		count++;
		node_idx = node_idx->next;
	}

	if (idx > count)
		return (NULL);

	return (tmp);
}
