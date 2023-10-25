#include "lists.h"

/**
 * *add_nodeint - function that prints all the elements of a list_t listint
 * @*h:header
 * @n:inpuut
 * Return: h
 *
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *med;
	listint_t *addb = malloc(sizeof(listint_t));

	if (addb == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	med = *head;
	*head = addb;
	(*head)->n = n;
	(*head)->next = med;
	return (*head);

}
