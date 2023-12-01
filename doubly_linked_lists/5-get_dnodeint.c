#include"lists.h"
/**
 *get_dnodeint_at_index - Function that returns the nth node of a linked list.
 *@head: Pointer to head.
 *@index: Index of the node, starting from 0.
 *Return: If the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head)
	{
		if (a++ == index)
			break;
		head = head->next;
	}
	return (head);
}
