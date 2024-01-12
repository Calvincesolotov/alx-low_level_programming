#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at beginning of a linked list.
  * @head: head of double pointer
  * @n: parameter that add the list
  * Return: NULL in failure
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pointa;

	if (head == NULL)
		return (NULL);
	pointa = malloc(sizeof(listint_t));
	if (pointa == NULL)
		return (NULL);
	pointa->n = n;
	pointa->next = *head;
	*head = pointa;
	return (pointa);
}
