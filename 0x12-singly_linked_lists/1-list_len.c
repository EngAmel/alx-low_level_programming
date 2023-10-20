#include "lists.h"

/**
 * list_len - function that count all the elements of a list_t list
 * @h:header
 *
 * Return: elm.
 **/
size_t list_len(const list_t *h)
{
	size_t elm = 0;

	while (h)
	{
		elm = elm + 1;
		h = h->next;
	}
	return (elm);
}

