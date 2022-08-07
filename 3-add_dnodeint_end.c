#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add the elements at the end of a dlistint_t list.
 *
 * @head: pointer to pointer of doubly linked list.
 * @n: value of new node.
 *
 * Return: address of new element or nul if failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *ptr;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
		return (*head);
	}

	ptr = (*head);
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = tmp;
	tmp->prev = ptr;

	return (tmp);
}
