#include "lists.h"

/**
 * free_listint2 - function that frees list_t listint
 * @head:header
 *
 **/
void free_listint2(listint_t **head)
{
	listint_t *t;

	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head  = t;
	}
	*head = NULL;

}
