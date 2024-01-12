#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum of linked list nodes
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
