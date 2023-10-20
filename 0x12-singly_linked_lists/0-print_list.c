#include "list.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h:header
 *
 * Return: elm.
 **/

size_t print_list(const list_t *h)
{
	size_t elm = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			h->len = 0;
			printf("[%d] (nill)\n", h->len);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			elm = elm + 1;
			h = h->next;
		}
		return (elm);
	}
}
