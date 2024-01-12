#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - function that reverses a listint_t
 * @head: represents double pointer
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *lastNode, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
lastNode = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = lastNode;
		lastNode = *head;
		*head = next;
	}
	*head = lastNode;
	return (*head);
}
