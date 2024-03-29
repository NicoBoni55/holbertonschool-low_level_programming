#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head : elements
 * @n : int
 *
 * Return: Address of the new elements, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	end = *head;

	if (*head != NULL)
	{
		while (end->next != NULL)
			end = end->next;

		end->next = new;
		new->prev = end;
	}
	else
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	return (new);
}
