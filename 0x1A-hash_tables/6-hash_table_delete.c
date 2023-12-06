#include "hash_tables.h"

/**
* hash_table_delete - this function deletes a hash table.
* @ht: hash table to be deleted.
* Return: void
*/

void hash_table_delete(hast_table_t *ht)
{
	hash_node_t *head_node;

	hash_node_t *next_node;

	unsigned long int i;

	unsigned long int table_size;

	i = 0;

	table_size = (*ht).size;

	while (i < table_size)
	{
		head_node = (*ht).array[i];

		while (head_node != NULL)
		{
			next_node = (*ht).next;

			free((*head_node).key);
			free((*head_node).value);
			free(head_node);
			head_node = next_node;
		}

		i++;
	}

	free((*ht).array);
	free(ht);
}
