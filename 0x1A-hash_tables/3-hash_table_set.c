#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to hash table array
 * @key: key
 * @value: value tu set
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	hash_node_t *new_node, *t;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0'
		|| ht->array == NULL || ht->size == 0)
		return (0);
	new_value = strdup(value);
	if (new_value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (t = ht->array[index]; t; t = t->next)
	{
		if (strcmp(t->key, key) == 0)
		{
			free(t->value);
			t->value = new_value;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_value);
		free(new_node);
		return (0);
	}
	new_node->value = new_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
