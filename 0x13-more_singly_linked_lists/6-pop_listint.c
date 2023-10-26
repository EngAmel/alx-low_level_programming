#include "lists.h"

/**
 * pop_listint - function that frees list_t listint
 * @head:header
 *
 * Return: data
 *
 **/
int pop_listint(listint_t **head)
{
	listint_t *t;
	int data;

	if (*head == NULL)
		return (0);

	t = *head;
	data = (*head)->n;
	*head  = (*head)->next;
	free(t);

	return (data);

}
