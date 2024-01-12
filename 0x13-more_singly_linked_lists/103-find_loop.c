#include "lists.h"

/**
 * find_listint_loop - identify the loop in a linked list.
 * @head: pointer to the start of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tloop, *hloop;

	tloop = hloop = head;
	while (tloop && hloop && hloop->next)
	{
		tloop = tloop->next;
		hloop = hloop->next->next;
		if (tloop == hloop)
		{
			tloop = head;
			break;
		}
	}
	if (!tloop || !hloop || !hloop->next)
		return (NULL);
	while (tloop != hloop)
	{
		tloop = tloop->next;
		hloop = hloop->next;
	}
	return (hloop);
}
