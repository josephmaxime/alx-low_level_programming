#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get a node of a linked list with his index.
 *
 * @head: linked list.
 * @index: index of a node.
 * Return: return node, or NULL if node do'nt exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_index;
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}

	node_index = head;
	count = 0;
	while ((node_index->next) && (count < index))
	{
		node_index = node_index->next;
		count++;
	}

	if (count < index)
	{
		node_index = NULL;
	}

	return (node_index);
}
