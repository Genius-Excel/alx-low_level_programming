#include "lists.h"

/**
* get_dnodeint_at_index - this function retrives the node at the index.
* @head: head node of the list.
* @index: index of he node to be returned.
* Return: the node found at the index or null if it does not.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int  node_idx = 0;

	while (head != NULL && node_idx < index)
	{
		head = (*head).next;

		node_idx += 1;
	}

	if (node_idx == index)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
