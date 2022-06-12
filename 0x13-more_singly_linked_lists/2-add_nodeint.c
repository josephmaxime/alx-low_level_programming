#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a new node at the biggining.
 *
 * @head: pointer of array list.
 * @n: integer of node.
 * Return: return address of a new elements, or 0 if is failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = (*head);
	*head = tmp;
	return (*head);
}
