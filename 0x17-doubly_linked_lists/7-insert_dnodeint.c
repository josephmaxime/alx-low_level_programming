#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - add the elements at the end of a dlistint_t list.
 *
 * @h: pointer to pointer of doubly linked list.
 * @n: value of new node.
 * @idx: position of a node to insert.
 *
 * Return: address of new element or nul if failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *ptr;
	unsigned int i;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;

	if (h == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		tmp->prev = NULL;
		tmp->next = *h;
		*h = tmp;
		return (*h);
	}

	ptr = (*h);
	i = 0;
	while (ptr != NULL)
	{
		if (i == idx - 1)
		{
			tmp->next = ptr->next;
			tmp->prev = ptr;
			ptr->next = tmp;
		}
		i += 1;
		ptr = ptr->next;
	}

	if (idx > i)
		return (NULL);

	return (tmp);
}
