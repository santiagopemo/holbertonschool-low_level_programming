#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: key of hash table element
 *
 * Return: the value associated with the
 * element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || ht->array == NULL
		|| ht->size == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	for (tmp = ht->array[index]; tmp; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}
	return (NULL);
}
