#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning of the list
 *@head : head node
 *@n : integer value of struct
 *Return: address of the new element or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
new_node->n = n;
if (head == NULL)
{
	return (NULL);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);

}
