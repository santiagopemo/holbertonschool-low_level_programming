#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer to hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	int comma = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (tmp = ht->array[i]; tmp; tmp = tmp->next, comma = 1)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
		}
	}
	printf("}\n");
}
