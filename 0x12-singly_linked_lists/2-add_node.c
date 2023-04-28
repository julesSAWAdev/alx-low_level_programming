#include "lists.h"

/**
 * add_node - adds node to the beginning of a list_t
 * @head: pointer to the first element of the list
 * @str: string to set in the new node
 * Return: mem address of the new element, NULL if failed
 **/
int _strlen_recursion(char *s);

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen_recursion(new->str);
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string s
 * Return: length s
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

