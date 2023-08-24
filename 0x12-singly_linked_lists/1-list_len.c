#include "lists.h"

/**
* list_len - this function counts the length of a list
* @h: list
* Return: the length of the list
*/

size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter += 1;
	}

	return (counter);
}

