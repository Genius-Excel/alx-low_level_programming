#include "lists.h"

/**
* free_listint_safe - this function frees a list.
* @h: head node for the list.
* Return: the size of the list that was freed.
*/

size_t free_listint_safe(listint_t **h);

size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;

	listint_t *slow = *h;

	listint_t *fast = *h;

	while (fast != NULL && (*fast).next != NULL)
	{
		if (slow == fast)
		{
			while (*h != slow)
			{
				listint_t *tmp = *h;

				*h = (*h)->next;

				free(tmp);
				counter += 1;
			}

			while (slow->next != *h)
			{
				listint_t *tmp = slow;

				slow = (*slow).next;

				free(tmp);
				counter += 1;
			}

			free(slow);
			counter += 1;

			*h = NULL;

			return (counter);
		}
	}

	while (*h != NULL)
	{
		listint_t *tmp = *h;

		*h = (*h)->next;

		free(tmp);
		counter += 1;
	}

	return (counter);
}
