#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h : elements
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
