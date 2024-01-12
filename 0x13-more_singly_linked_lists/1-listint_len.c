#include "lists.h"
#include <stdio.h>

/**
 * listint_len - the number of elements in a linked listint_t list.
 * @h: pointer to head of list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t listNumber = 0;

	while (h != NULL)
	{
	h = h->next;
		listNumber++;
	}
	return (listNumber);
}
