#include "lists.h"
/**
 * list_len - return number of elements in a linked list
 * @h: elements
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
