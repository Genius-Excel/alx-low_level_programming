#include "hash_tables.h"

/**
* hash_table_set - this funtion adds an element to the table.
* @ht: hash table element is to be added.
* @key: this represents the key of the element to be added.
* @value: this represents the value of the element to be added.
* Return: 1 on success else 0.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head_node;

	hash_node_t *new_node;

	unsigned long int arr_idx;

	unsigned long int table_size;

	/*Check for empty key*/
	if (*key == '\0' || key == NULL)
	{
		return (0);
	}

	if (ht == NULL)
	{
		return (0);
	}

	table_size = (*ht).size;

	arr_idx = key_index((const unsigned char *)key, table_size);

	head_node = (*ht).array[arr_idx];

	while (head_node != NULL)
	{
		if (strcmp((*head_node).key, key) == 0)
		{
			free((*head_node).value);
			(*head_node).value = strdup(value);
			if ((*head_node).value == NULL)
			{
				return (0);
			}

			return (1);
		}
		head_node = (*head_node).next;

	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (0);
	}

	(*new_node).key = strdup(key);
	(*new_node).value = strdup(value);

	if ((*new_node).key == NULL || (*new_node).value == NULL)
	{
		free((*new_node).key);
		free((*new_node).value);
		free(new_node);
		return (0);
	}

	(*new_node).next = (*ht).array[arr_idx];
	(*ht).array[arr_idx] = new_node;

	return (1);
}
