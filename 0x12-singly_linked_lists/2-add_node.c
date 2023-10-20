#include "lists.h"
/**
 * *add_node - function add node
 * @head:header
 * @str:string
 *
 * Return: pointer.
 **/

list_t *add_node(list_t **head, const char *str)
{
	char *s;
	int l;
	list_t *add = malloc(sizeof(list_t));

	s = strdup(str);
	l = strlen(str);
	if (add == NULL)
	{
		return (NULL);
	}
	add->str = s;
	add->len = l;
	add->next = NULL;

	add->next = *head;
	*head = add;
	return (*head);
}
