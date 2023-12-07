#include "hash_tables.h"

/**
* hash_table_get - this function returns a vaaluee of the key.
* @key: key associated with the value.
* @ht: hash table.
* Return: the value of the associated key if found sles NULL.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int arr_idx;

	unsigned long int table_size;

	hash_node_t *head_node;

	if (ht == NULL)
	{
		return (NULL);
	}

	if (*key == '\0' || key == NULL)
	{
		return (NULL);
	}

	table_size = (*ht).size;

	arr_idx = key_index((unsigned char *)key, table_size);

	head_node = (*ht).array[arr_idx];

	while (head_node != NULL)
	{
		if (strcmp((*head_node).key, key) == 0)
		{
			return ((*head_node).value);
		}
		head_node = (*head_node).next;
	}

	return (NULL);
}
