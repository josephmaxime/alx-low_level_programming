#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 *
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* print list prototype */
size_t print_list(const list_t *h);

/* length of linked list prototype */
size_t list_len(const list_t *h);

/* add a new node prototype */
list_t *add_node(list_t **head, const char *str);

/* add a new node in end */
list_t *add_node_end(list_t **head, const char *str);

/* free linked list prototype */
void free_list(list_t *head);
#endif /* LISTS_H */
