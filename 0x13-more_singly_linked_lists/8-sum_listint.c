#include "lists.h"
/**
 *sum_listint- function that returns the sum
 *@head : head node
 *Return: sum of all data in nodes, if empty 0
 */

int sum_listint(listint_t *head)
{
	listint_t *current_node;
	int sumofvalues = 0;
	
	current_node = head;
	if (head == NULL)
	{
		return (0);
	}

	while (current_node != NULL)
        {
	sumofvalues += current_node->n;
	current_node = current_node->next;
        }

	return (sumofvalues);

}
