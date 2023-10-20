#include "lists.h"
/**
 * *add_node_end - function add node
 * @head:header
 * @str:string
 *
 * Return: pointer.
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int l;
	list_t *add;
	list_t *temp = malloc(sizeof(list_t));

	add = *head;
	s = strdup(str);
	l = strlen(str);
	if (add == NULL)
	{
		return (NULL);
	}
	temp->str = s;
	temp->len = l;
	temp->next = NULL;
	while (add->next != NULL)
	{
		add = add->next;
	}
	add->next = temp;
	return (add->next);
}
