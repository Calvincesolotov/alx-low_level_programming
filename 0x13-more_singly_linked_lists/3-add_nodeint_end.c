#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - add node at end of a linked list.
  * @head: head of double pointer
  * @n: parameter that add the list
  * Return: NULL if it fails
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endd;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	endd = malloc(sizeof(listint_t));
	if (endd == NULL)
		return (NULL);
	endd->n = n;
	endd->next = NULL;
	if (*head == NULL)
	{
	*head = endd;
		return (endd);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = endd;
	return (endd);
}
