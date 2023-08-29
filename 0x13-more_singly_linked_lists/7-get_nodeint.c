#include "lists.h"

/**
* get_nodeint_at_index - this function gets the node index
* @head: head node of the linked list.
* @index: index of the head node in the list.
* Return: NULL if no index exist.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head != NULL)
	{
		if (counter == index)
		{
			return (head);
		}

		head = (*head).next;

		counter += 1;
	}

	return (NULL);
}
