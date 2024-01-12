#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: old list to append
 * @size: size of the new list
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t m;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (m = 0; m < size - 1; m++)
		newlist[m] = list[m];
	newlist[m] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t m, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (m = 0; m < num; m++)
		{
			if (head == list[m])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
