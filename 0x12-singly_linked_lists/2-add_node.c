#include "lists.h"
/**
 *add_node -prints list of elements in linked list
 *@head : linked list with all elements
 *@str : string to be duplicated and stored
 * Return: the address of added element or null if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
unsigned int i;
unsigned int str_length;

str_length = 0;
i = 0;
new_node = malloc(sizeof(list_t));

if (new_node == NULL)
{
	return (NULL);
}
else
{
new_node->str = strdup(str);
while (str[i] != '\0')
{
str_length++;
i++;
}
new_node->len = str_length;
new_node->next = *head;
*head = new_node;
}
return (*head);
}
