#include "lists.h"

/**
* print_list - this function prints a list
* @h: list pointer
* Return: the number of nodes in the list
*/

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;

		counter += 1;
	}

	return (counter);
}
