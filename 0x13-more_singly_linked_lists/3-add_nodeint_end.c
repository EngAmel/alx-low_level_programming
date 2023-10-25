#include "lists.h"

/**
 * *add_nodeint_end - function that prints all the elements of a list_t listint
 * @head:header
 * @n:inpuut
 * Return: h
 *
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *e, *adde;

	adde = malloc(sizeof(listint_t));
	if (adde == NULL)
	{
		return (NULL);
	}
	adde->n = n;
	adde->next = NULL;

	if (*head == NULL)
		*head = adde;
	else
	{
		e = *head;
		while (e->next != NULL)
		{
			e = e->next;
		}
		e->next = adde;
	}
	return (*head);

}
