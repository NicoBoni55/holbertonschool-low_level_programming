#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head : node
 * @str : string
 *
 * Return: adress of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		new = malloc(sizeof(list_t));
		new->str = strdup(str);
		new->head = len;

	}
	return (new);
}
