#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the beginning of the list
 *@head : head node
 *@n : integer value of struct
 *Return: address of the new element or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *current_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current_node->next != NULL)
	{
	current_node = current_node->next;
	}
	current_node->next = new_node;
	return (new_node);
}
