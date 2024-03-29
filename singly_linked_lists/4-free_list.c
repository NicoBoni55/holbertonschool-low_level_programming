#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head : header
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}
	free(head);
}
