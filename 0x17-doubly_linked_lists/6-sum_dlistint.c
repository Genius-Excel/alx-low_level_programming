#include "lists.h"

/**
* sum_dlistint - this  function sum all the elements in the list.
* @head: this is the head node of the list.
* Return: the sume of all the elements.
*/

int sum_dlistint(dlistint_t *head)
{
	int total_sum = 0;

	int i;

	for (i = 0; head != NULL; i++)
	{
		total_sum += (*head).n;

		head = (*head).next;
	}

	return (total_sum);
}
