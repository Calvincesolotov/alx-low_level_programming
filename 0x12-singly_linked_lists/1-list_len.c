#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * list_len - check the elements in linked list.
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int addd = 0;

	while (h)
	{
		addd++;
		h = h->next;
	}
	return (addd);
}
