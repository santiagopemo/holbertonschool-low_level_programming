#include "hash_tables.h"

/**
 * shash_table_create - function that creates a sorted hash table
 * @size: sorted hash table size
 *
 * Return: a pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}

/**
 * shash_table_set - function that adds an element to the sorted hash table
 * @ht: pointer to sorted hash table array
 * @key: key
 * @value: value to set
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	shash_node_t *new_node, *t;

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
	new_node = malloc(sizeof(shash_node_t));
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
	new_node->sprev = NULL;
	if (ht->shead == NULL)
	{
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
		return (1);
	}
	ht->shead->sprev = new_node;
	new_node->snext = ht->shead;
	ht->shead = new_node;
	return (1);
}

/**
 * shash_table_get - function that retrieves a value associated with a key
 * @ht: pointer to sorted hash table
 * @key: key of hash table element
 *
 * Return: the value associated with the
 * element, or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
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
/**
 * shash_table_print - function that prints a sorted hash table
 * @ht: pointer to sorted hash table
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int comma = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (tmp = ht->shead; tmp; tmp = tmp->snext, comma = 1)
	{
		if (comma)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - function that prints a sorted hash table in reverse
 * @ht: pointer to sorted hash table
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int comma = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (tmp = ht->stail; tmp; tmp = tmp->sprev, comma = 1)
	{
		if (comma)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes a sorted hash table
 * @ht: pointer to sorted hash table
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *next;
	unsigned long int i;

	if (ht == NULL || ht->array == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		for (tmp = ht->array[i]; tmp; tmp = next)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
