#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: pointer of the first node
 * @index: index is the index of the node
 *
 * Return: pointer of Index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m;

	if (head == NULL)
		return (NULL);
	for (m = 0; m < index; m++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
