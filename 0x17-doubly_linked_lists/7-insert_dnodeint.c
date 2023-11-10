#include "lists.h"

/**
 * insert_dnodeint_at_index - this inserts  new node in the index.
 * @h: head node of the list.
 * @idx: index of the node to be inserted.
 * @n: inter value to be inserted.
 * Return: address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;

	dlistint_t *new_node;

	dlistint_t *current = *h;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL); /*M alloc Failed.*/
	}

	/*Initialize the new node*/
	new_node->n = n;

	/* If index is 0, insert at the beginning*/
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}

		*h = new_node;
		return (new_node);
	}

	/* Traverse the list to find the node at position (idx - 1)*/

	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = current;

	new_node->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}

	current->next = new_node;

	return (new_node);
}
