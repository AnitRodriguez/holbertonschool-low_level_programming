#include "lists.h"

/**
 *print_list - function that prints all the elements of a list.
 *@h: Pointer
 *Return: Number to nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
		{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		counter++;
		h  = h->next;
		}
	return (counter);
}