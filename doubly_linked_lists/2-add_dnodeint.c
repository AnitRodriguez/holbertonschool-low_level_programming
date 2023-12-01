#include"lists.h"
/**
 *add_dnodeint - function that adds a new node at the beginning of a list.
 *@head: Pointer to pointer.
 *@n: Integer.
 *Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
	{
		return (NULL);
	}
	a->n = n;
	a->prev = NULL;
	if (*head != NULL)
		(*head)->prev = a;
	a->next = *head;
	*head = a;
	return (a);
}
