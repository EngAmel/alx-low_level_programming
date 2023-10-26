#include "lists.h"

/**
 * *get_nodeint_at_index - prints all the elements of a list_t listint
 * @head:header
 * @index:index
 *
 * Return: nth.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
