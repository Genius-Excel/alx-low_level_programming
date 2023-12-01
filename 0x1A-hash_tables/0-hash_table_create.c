#include "hash_tables.h"

/**
 * hash_table_create - this functon creates a new table based on size.
 * @size: size of the hash table to be created.
 * Return: pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	(*new_table).array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
		return (NULL);
	}

	(*new_table).size = size;

	return (new_table);
}
