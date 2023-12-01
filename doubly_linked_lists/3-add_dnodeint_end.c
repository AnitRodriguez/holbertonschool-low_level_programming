#include"lists.h"
/**
 *add_dnodeint_end - function that adds a new node at the end of a list.
 *@head: Pointer to pointer head.
 *@n: Integer.
 *Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *a = NULL, *b = NULL;

	a = malloc(sizeof(dlistint_t));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
		a->next = NULL;
		a->prev = NULL;
		a->n = n;

		if (!head || !(*head))
		{
			*head = a;
			return (a);
		}
		else
		{
			b = *head;
			while (b->next)
				b = b->next;
			a->prev = b;
			b->next = a;
			return (a);
		}
	return (NULL);
}
