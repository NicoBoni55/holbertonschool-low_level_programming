#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Returns the number of elements
 *               in a linked dlistint_t list.
 * @h: A pointer to the head 
 *
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
