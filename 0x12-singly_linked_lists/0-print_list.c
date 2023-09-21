#include "lists.h"
/**
 *print_list-prints list of elements in linked list
 *@h : linked list with all elements
 *Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t num_elements;

	num_elements = 0;

while (h != NULL)
{
	if (h->str == NULL)
	{
		printf("[%d]%s\n", 0, "(nil)");
	}
	else
	{
		printf("[%d]%s\n", h->len, h->str);
	}
	h = h->next;
	num_elements++;
}

return (num_elements);
}
