#include "lists.h"
/**
 * free_dlistint - free a list
 * @head : elements
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
