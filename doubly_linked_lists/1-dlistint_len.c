#include"lists.h"
/**
 *dlistint_len - Function that returns the number of elements in a linked list
 *@h: Pointer to list.
 *Return: Number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
