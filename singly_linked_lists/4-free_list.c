#include"lists.h"
/**
 *free_list - Function that frees a list.
 *@head: Pointer to list.
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->str != NULL)
		{
			free(head->str);
		}
		free_list(head->next);
		free(head);
	}
}

