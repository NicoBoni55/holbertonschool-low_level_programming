#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h : elements
 * @idx : index
 * @n : value
 *
 * Return: new node of NULL if it failes
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;

	if ((*h) == NULL)
	       return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if ((*h)->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode = malloc(sizeof(dlistint_t));
	newnode->n = n;

	if (newnode == NULL)
		return (NULL);

	(*h)->prev = newnode;
	(*h) = newnode;
	(*h)->prev->next = newnode;

	return (newnode);
}
