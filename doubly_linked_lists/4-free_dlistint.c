#include"lists.h"
/**
 *free_dlistint - function that frees a dlistint_t list.
 *@head: Pointer to head.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *b;

	while (head)

	{
		b = head->next;
		free(head);
		head = b;
	}
}
