#include "lists.h"

/**
* add_nodeint_end - this function adds a new node at the end of the list.
* @head: head of the node list.
* @n: integer value of the element in the list.
* Return: the adress of the new element.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	(*new_node).n = n;

	(*new_node).next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *current_node = *head;

		while ((*current_node).next != NULL)
		{
			current_node = (*current_node).next;
		}

		(*current_node).next = new_node;
	}

	return (new_node);
}
