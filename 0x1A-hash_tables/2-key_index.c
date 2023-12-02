#include "hash_tables.h"

/**
* key_index - this function retruns the index of a key from a table.
* @key: key whose index is to be retrieved.
* @size: size of the new hash table.
* Return: index of the key frm the hash table.
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int dj_value;

	unsigned long int index;

	dj_value = hash_djb2(key);

	index = dj_value % size;

	return (index);
}

