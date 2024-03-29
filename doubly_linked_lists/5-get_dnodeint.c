#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head : elements
 * @index : node
 *
 * Return: node or if node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index)
	{

		if (head == NULL)
			return (NULL);

	head = head->next;
	index--;
	}
	return (head);
}
