#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum all the elements of a dlistint_t list.
 *
 * @h: doubly linked list
 *
 * Return: sum of node.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
