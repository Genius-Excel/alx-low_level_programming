#include "lists.h"

/**
* add_nodeint - this function adds a new node to the list.
* @head: pointer to the address of the first node in the list.
* @n: integer value for which the node is to be updated.
* Return: pointer to the address of the new nodee.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	(*new_node).n = n;

	(*new_node).next = *head;

	*head = new_node;

	return (new_node);
}
