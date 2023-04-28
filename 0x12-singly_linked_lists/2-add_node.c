#include <stdlib.h>
#include "lists.h"

/**
  * _strlen - takes length of the string
  * @s: string
  * return: length of the string
  */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
  * add_node - add a node to list
  * @head: get head in the list
  * @str: string to add to the head
  * return: * to current position in list
  */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *item;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new = *head;
	item = malloc((len + 1) * sizeof(char));
	if (item == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		item[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(item);
		return (NULL);
	}
	new->str = item;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}

