#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - free linked lists
 *
 * @head: linked list
 *
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		free(head);
	}
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
