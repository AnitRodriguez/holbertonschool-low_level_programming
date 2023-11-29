#include"lists.h"
/**
 *list_len - function that returns the number of elements in a linked list.
 *@h: Pointer.
 *Return: a
 */
size_t list_len(const list_t *h)
{
	unsigned int a;

	for (a = 0; h != NULL; a++)
	{
		h = h->next;
	}
	return (a);
}
