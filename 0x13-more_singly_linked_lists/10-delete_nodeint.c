#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at the given position.
 *
 * @head: pointer of linked list.
 * @index: index of position.
 * Return: return 1 if is success, -1 if is failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_idx = *head, *tmp;
	unsigned int count;

	if (head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(node_idx);
		return (1);
	}

	node_idx = *head;
	count = 0;
	while (count < index)
	{
		count++;
		node_idx = node_idx->next;
		tmp = node_idx->next;
	}
	node_idx->next = tmp->next;
	free(tmp);
	if (index > count)
		return (-1);

	return (1);
}
