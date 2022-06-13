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
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
