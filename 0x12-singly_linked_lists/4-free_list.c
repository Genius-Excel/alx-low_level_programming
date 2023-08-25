#include "lists.h"

/**
* free_list - this function frees
* @head: list head
* Return: void
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *tmp = head;

		head = head->next;

		free(tmp->str);
		free(tmp);
	}
}
