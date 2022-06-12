#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end.
 *
 * @head: pointer of array list.
 * @n: integer of node.
 * Return: return address of a new elements, or NULL if is failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *last = *head;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	last = *head;
	while (last->next)
		last = last->next;

	last->next = tmp;
	return (last);
}
