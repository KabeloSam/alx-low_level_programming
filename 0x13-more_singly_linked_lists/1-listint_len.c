#include "lists.h"
/**
 *listint_len - returns number of elements of list
 *@h : head node
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current_node;
	size_t i = 0;

	current_node = h;
	while (current_node != NULL)
	{
		i++;
		current_node = current_node->next;
	}
	return (i);
}
