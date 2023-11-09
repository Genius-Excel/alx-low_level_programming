#include "lists.h"

/**
* add_dnodeint_end - this function adds a new node at the end of a list.
* @head: head node of the linked list.
* @n: integr value of the element for the new node.
* Return: address of the new element.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node; /*Initialised varible for the node*/

	dlistint_t *last = *head;

	end_node = malloc(sizeof(dlistint_t));

	if (end_node == NULL)
	{
		/*Memeory Allocation failed, no node creeated*/
		return (NULL);
	}

	/*Initialise the value of the node*/
	(*end_node).n = n;

	(*end_node).next = NULL;

	if (*head == NULL)
	{
		(*end_node).prev = NULL;
		*head = end_node;
		return (end_node);
	}

	while  ((*last).next != NULL)
	{
		last = (*last).next;
	}

	(*last).next = end_node;
	(*end_node).prev = last;

	return (end_node);
}
