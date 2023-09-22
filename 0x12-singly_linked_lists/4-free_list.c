#include "lists.h"
/**
 *free_list -frees the list
 *@head : linked list with all elements
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current_node = head;
	list_t *next;

	while (current_node != NULL)
	{
	next = current_node->next;
	free(current_node->str);
	free(current_node);
	current_node = next;
	}
}
