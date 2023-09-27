#include "lists.h"
/**
 *free_listint - frees listint_t and sets head to null
 *@head : head of the list
 *Return: always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;
	listint_t *next;

	while (current_node != NULL)
	{
	next = current_node->next;
	free(current_node);
	current_node = next;
	}

	*head = NULL;
}
