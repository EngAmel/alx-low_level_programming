#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list_t listint
 * @h:header
 *
 * Return: i.
 **/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL ;)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
