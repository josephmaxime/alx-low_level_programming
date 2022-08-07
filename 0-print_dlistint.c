#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: doubly linked list
 *
 * Return: numbers of node.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	int cmpt;

	tmp = h;
	if (tmp == NULL)
		return (0);

	cmpt = 0;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		cmpt += 1;
		tmp = tmp->next;
	}

	return (cmpt);
}
