#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - add the elements of a dlistint_t list.
 *
 * @head: pointer to pointer of doubly linked list.
 *
 * Return: address of new element or nul if failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	if (*head == NULL)
	{
		tmp->n = n;
		tmp->next = NULL;
		tmp->prev = NULL;
	}

	tmp->n = n;
	tmp->next = (*head);
	tmp->prev = NULL;

	*head = tmp;

	return (*head);
}
