#include <stdlib.h> /* c libraries*/
#include "lists.h"
#include <stdio.h>


/**
 * free_list - Erases the memory allocated to the 
 *the specific linked list
 * @head: A pointer to head
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
