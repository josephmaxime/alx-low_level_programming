#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints all the elements of a dlistint_t list.
 *
 * @h: doubly linked list
 *
 * Return: numbers of node.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	int cmpt;

	if (h == NULL)
		return (0);

	cmpt = 0;
	tmp = h;
	while (tmp)
	{
		cmpt += 1;
		tmp = tmp->next;
	}

	return (cmpt);
}
