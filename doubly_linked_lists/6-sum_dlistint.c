#include "lists.h"
/**
 * sum_dlistint - return sum of all the data(n)
 * @head: elements
 *
 * Return: sum or if the list is empty 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		if (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
