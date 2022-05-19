#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print elements of linked lists
 *
 * @h: linked list
 * Return: the number of node
 */
size_t print_list(const list_t *h)
{
	size_t number;

	number = 0;
	while (h)
	{
		if ((h->str) == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		number++;
	}
	return (number);
}
