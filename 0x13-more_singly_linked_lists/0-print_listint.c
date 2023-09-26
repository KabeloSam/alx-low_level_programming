#include "lists.h"
/**
 *print_listint - prints all elements of list
 *@h : head node
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current_node;
	size_t i = 0;

	current_node = h;

	while (current_node != NULL)
	{
	printf("%d\n", current_node->n);
	i++;
	current_node = current_node->next;
	}

	return (i);

}
