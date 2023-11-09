#include "lists.h"

/**
* dlistint_len - this function counts the number of elements in a list.
* @h: head node of the linekd list.
* Return: number of element in the list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_elements = 0;

	size_t i;

	for (i = 0; h != NULL ; i++)
	{
		h = (*h).next;

		num_of_elements += 1;
	}

	return (num_of_elements);
}
