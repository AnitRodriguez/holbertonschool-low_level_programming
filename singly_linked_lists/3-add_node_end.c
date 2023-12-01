#include"lists.h"
/**
 *add_node_end - function that adds a new node at the end of a list.
 *@head: Pointer to pointer.
 *@str: pointer to string.
 *Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *b;
	list_t *c = *head;
	size_t a = 0;

	b = malloc(sizeof(list_t));

	if (b == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a];)
		a++;
	b->str = strdup(str);
	b->len = a;

	if (*head == NULL)
	{
		*head = b;
		return (*head);
	}
	while (c->next != NULL)
	{
		c = c->next;
	}
	c->next = b;
	return (c->next);
}
