#include "lists.h"

int _strlen_recursion(char *s);

/**
 * add_node_end - add node on the end of a list_t
 * @head: pointer to the first element of the list
 * @str: string to set in the new node
 * Return: address of the new element, or NULL if failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux = *head;

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
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	else
		*head = new;

	return (new);
}

/**
 * _strlen_recursion - return length of a string
 * @s: string s
 * Return: length of string s
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

