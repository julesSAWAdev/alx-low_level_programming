#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: pointer to list
 **/
void free_list(list_t *head)
{
	list_t *current_node;
	list_t *next_node;

	if (head)
	{
		current_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(current_node->str);
			free(current_node);
			current_node = next_node;
			next_node = next_node->next;
		}
		free(current_node->str);
		free(current_node);
	}
}

