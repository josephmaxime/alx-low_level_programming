#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add a new node of end of linked lists
 *
 * @head: linked list
 * @str: string
 * Return: address of new node or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	char *_str;
	list_t *last = *head;

	if (str == NULL)
	{
		return (NULL);
	}
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	_str = strdup(str);
	if (_str == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->str = _str;
	tmp->len = strlen(str);
	tmp->next = NULL;
	if ((*head) == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	last = *head;
	while ((last->next))
	{
		last = last->next;
	}
	last->next = tmp;
	return (last);
}
