#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - function that add a new node at the beginning
 * @head : the beginning of the node
 * @str: variable to dulicate 
 *
 * Return: NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dupl;
	int len;
	list_t *start;

	start = malloc(sizeof(list_t));

	if (start == NULL)
		return (NULL);

	dupl = strdup(str);
	if (dupl == NULL)
	{
	free (start);
	return (NULL);
	}
	for (len = 0; len[str];)

	start->str = dupl;
	start->len = len;
	start->next = *head;
	
	*head = start;
	return (start);
}
