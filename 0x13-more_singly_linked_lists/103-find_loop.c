#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - find the loop in linked list.
 *
 * @head: head of a linked list
 *
 * Return: linked list.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p, *fast_p;

	slow_p = fast_p = head;

	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;

		if (slow_p == fast_p)
		{
			slow_p = head;
			break;
		}
	}

	if (!slow_p || !fast_p || !fast_p->next)
		return (NULL);

	while (slow_p != fast_p)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next;
	}

	return (fast_p);
}
