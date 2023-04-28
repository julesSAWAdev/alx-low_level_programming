#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
* _strlen - function that returns the length of a string.
* @s : s is a character
* Return: value is i
*/
int _strlen(const char *s)
{
   int i = 0;


   while (s[i] != '\0')
   {
       i++;
   }
   return (i);
}


/**
* add_node - add a new node at beginning of a list_t list.
* @head: head of a list_t list.
* @str: value to insert into element.
* Return: the number of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *content;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new = *head;
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		content[i] = str[i];

   new = malloc(sizeof(list_t));
   if (new == NULL)
	{
		free(content);
		return (NULL);
	}
   new->str = strdup(str);


   new->len = _strlen(str);
   new->next = *head;
   *head = new;


   return (new);
}

