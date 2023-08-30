#include "lists.h"

/**
* find_listint_loop - this function find the loop in a linked list.
* @head: head node pointer.
* Return: the address of the node.
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL || (*head).next == NULL)
	{
		return (NULL);
	}

	slow = head;

	fast = (*head).next;

	while (fast != NULL && (*fast).next != NULL)
	{
		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = (*slow).next;

				fast = (*fast).next;
			}
			return (slow);
		}

		slow = (*slow).next;

		fast = fast->next->next;
	}

	return (NULL);
}
