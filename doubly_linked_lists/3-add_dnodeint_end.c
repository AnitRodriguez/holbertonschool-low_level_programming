#include"lists.h"
/**
 *add_dnodeint_end - function that adds a new node at the end of a list.
 *@head: Pointer to pointer head.
 *@n: Integer.
 *Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *tmp = *head;

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	if (*head == NULL)
	{
		tmp->prev = NULL;
		tmp->next = NULL;
		*head = tmp;
	}
	else
	{
		while (new != NULL)
		{
			if (new->next == NULL)
			{
				tmp->n = n;
				tmp->prev = new;
				tmp->next = NULL;
				new->next = tmp;
				break;
			}
			new = new->next;
		}
	}
	return (*head);
}
