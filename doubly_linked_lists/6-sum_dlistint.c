#include"lists.h"
/**
 *sum_dlistint - function that returns the sum of all the data (n) of a
 *linked list.
 *@head: Pointer to head.
 *Return: Sum of all data or the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int a = 0;

	while (head)
	{
		a += head->n;
		head = head->next;
	}
	return (a);
}
