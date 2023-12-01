#include"lists.h"
/**
 *print_dlistint -  Function prints all the elements of a dlistint_t list.
 *@h: Pointer to lists
 *Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		if (h->n)
			printf("%i", h->n);
		else
			printf("%i", 0);
		printf("\n");
		h = h->next;
		a++;
	}
	return (a);
}
