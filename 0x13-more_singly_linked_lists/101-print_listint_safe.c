#include "lists.h"

/**
* print_listint_safe - this prints a list linked list.
* @head: head node of the linked list.
* Return: to number of elements in the list.
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;

	const listint_t *fast = head;

	size_t counter = 0;

	while (fast != NULL && (*fast).next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, (*slow).n);
		slow = (*slow).next;

		fast = fast->next->next;

		counter += 1;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, (*slow).n);
			printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
			exit(98);
		}
	}

	while (head != NULL)
	{
		printf("[%p] %d \n", (void *)head, (*head).n);
		head = (*head).next;

		counter += 1;
	}

	return (counter);
}
