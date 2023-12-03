#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - function that add a new node at the end
 * @head : the end of the node
 * @str: variable to dulicate
 *
 * Return: the address of the new element
 * or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dupl;
	int len = 0;
	list_t *start, *end;

	if (str == NULL)
		return (NULL);

	start = malloc(sizeof(list_t));
		if (start == NULL)
		return (NULL);

	dupl = strdup(str);
	if (dupl == NULL)
	{
		free(start);
		return (NULL);
	}

	while (str[len])
		len++;

	start->str = dupl;
	start->len = len;
	start->next = NULL;

	if (*head == NULL)
		*head = start;

	else
	{

		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = start;
	}

	return (*head);
}
