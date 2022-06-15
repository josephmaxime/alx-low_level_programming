#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - free linked list.
 *
 * @h: pointer of linked list.
 *
 * Return: size of list.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t cmpt = 0;
	listint_t *tmp;

	while (*h && *h > (*h)->next)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		cmpt++;
	}
	if (*h)
	{
		free(*h);
		cmpt++;
	}

	*h = NULL;
	return (cmpt);
}
