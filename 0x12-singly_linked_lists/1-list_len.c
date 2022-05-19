#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - length of linked lists
 *
 * @h: linked list
 * Return: the number of node
 */
size_t list_len(const list_t *h)
{
	size_t number;

	number = 0;
	while (h)
	{
		h = h->next;
		number++;
	}
	return (number);
}
