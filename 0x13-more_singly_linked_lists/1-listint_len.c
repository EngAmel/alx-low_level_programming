#include "lists.h"

/**
 * listint_len - function that prints all the elements of a list_t listint
 * @h:header
 *
 * Return: i.
 **/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL ;)
	{
		i++;
		h = h->next;
	}
	return (i);
}
