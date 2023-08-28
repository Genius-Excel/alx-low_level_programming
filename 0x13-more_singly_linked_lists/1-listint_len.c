#include "lists.h"

/**
* listint_len - this function counts the number of elements in a list.
* @h: list head node.
* Return: the total number of elements in the list.
*/

size_t listint_len(const listint_t *h)
{
	size_t list_len;

	for (list_len = 0; h != NULL; list_len++)
	{
		h = (*h).next;
	}

	return (list_len);
}
