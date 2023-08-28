#include "lists.h"

/**
* print_listint - this function prints all the elements in the list.
* @h: head node of the list.
* Return: the number of nodes in the list.
*/

size_t print_listint(const listint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
	}

	return (counter);
}
