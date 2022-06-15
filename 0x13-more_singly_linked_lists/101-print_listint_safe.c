#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - print all the elements of the list.
 *
 * @head: linked list.
 * Return: number of nodes.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
		exit(98);
	while (head && head > head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		count++;
	}
	else
		exit(98);

	return (count);
}
