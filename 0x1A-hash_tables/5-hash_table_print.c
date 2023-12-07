#include "hash_tables.h"

/**
* hash_table_print - this function prints the hash table key and values.
* @ht: hash table to be printed.
* Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int arr_idx;

	unsigned long int table_size;

	bool k_v_pair;

	char *key;

	char *value;

	hash_node_t *head_node;

	table_size = (*ht).size;

	if (ht == NULL)
		return;

	k_v_pair = true;

	putchar('{');

	for (arr_idx = 0; arr_idx < table_size; arr_idx++)
	{
		head_node = (*ht).array[arr_idx];

		while (head_node != NULL)
		{
			if (!k_v_pair)
				printf(", ");

			key = (*head_node).key;
			value = (*head_node).value;
			printf("'%s' : '%s'", key, value);
			k_v_pair = false;
			head_node = (*head_node).next;
		}
	}
	printf("}\n");
}
