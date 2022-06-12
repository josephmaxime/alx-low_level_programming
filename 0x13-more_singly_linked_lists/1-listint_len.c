#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - print all the elements of the list.
 *
 * @h: array list.
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
