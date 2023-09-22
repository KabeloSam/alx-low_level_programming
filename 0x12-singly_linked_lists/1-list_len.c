#include "lists.h"
/**
 *list_len -prints list of elements in linked list
 *@h : linked list with all elements
 *Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
size_t num_elements;
num_elements = 0;

while (h != NULL)
{
h = h->next;
num_elements++;
}
return (num_elements);
}
