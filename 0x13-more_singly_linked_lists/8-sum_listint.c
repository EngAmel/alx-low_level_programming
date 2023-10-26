#include "lists.h"

/**
 * sum_listint - prints all the elements of a list_t listint
 * @head:header
 *
 * Return: sum.
 **/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	for (; head;)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
