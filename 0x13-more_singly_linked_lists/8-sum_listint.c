#include "lists.h"

/**
* sum_listint - this function calculates to the total sum of data.
* @head: hed node of the list.
* Return: the value of the total elements sum.
*/

int sum_listint(listint_t *head)
{
	int total_element_sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		int data_value = (*head).n;

		head = (*head).next;

		total_element_sum += data_value;
	}

	return (total_element_sum);
}
