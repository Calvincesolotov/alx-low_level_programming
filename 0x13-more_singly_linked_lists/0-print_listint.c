#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a fn that prints all
 * elemnts of a list
 * @h:head in the list
 * Return:the list
 */

size_t print_listint(const listint_t *h)
{
	size_t addd = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		addd++;
	}
	return (addd);
}
