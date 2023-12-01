#include"lists.h"
/**
 *add_node - function that adds a new node at the beginning of a list.
 *@str: Pointer.
 *@head: Pointer to pointer.
 *Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t a;
	list_t *b;

	b = malloc(sizeof(list_t));
	if (b == NULL)
	{
		return (NULL);
	}
	b->str = strdup(str);

	for (a = 0; str[a]; a++)

	b->len = a;
	b->next = *head;
	*head = b;
	return (*head);
}
