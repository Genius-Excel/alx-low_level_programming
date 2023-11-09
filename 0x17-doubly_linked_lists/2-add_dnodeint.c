#include "lists.h"

/**
* add_dnodeint - this function intialises a new node at begining of list.
* @head: head node of the list
* @n: integer value to add the new node.
* Return: address of the new node on success.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node; /*New node intialised with the data type*/

	new_node = malloc(sizeof(dlistint_t)); /*allocate memory forthe node*/

	if (new_node == NULL)
	{
		/*Memory Allocation failed.*/
		return (NULL);
	}

	/*Initialising and setting the values for the new node*/
	(*new_node).n = n;

	(*new_node).next = *head;

	(*new_node).prev = NULL;

	if (*head != NULL)
	{
		(*(*head)).prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
