#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - get sum of node of a linked list.
 *
 * @head: linked list.
 * Return: return sum of node, or 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	node = head;
	sum = 0;
	while (node->next)
	{
		node = node->next;
		sum += node->n;
	}

	return (sum);
}
