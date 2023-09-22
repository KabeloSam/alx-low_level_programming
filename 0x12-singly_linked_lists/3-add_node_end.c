#include "lists.h"
/**
 *add_node_end - add node at the end of linked list
 *@head : linked list with all elements
 *@str : string to be duplicated and stored
 * Return: the address of added element or null if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_end_node;
unsigned int str_length;
str_length = 0;
new_end_node = malloc(sizeof(list_t));

    if (new_end_node == NULL)
    {
        return (NULL);
    }
    new_end_node->str = strdup(str);
    
    if (new_end_node->str == NULL)
    {
      return (NULL);
    }
str_length = strlen(str);
new_end_node->len = str_length;
new_end_node->next = NULL;

if (*head == NULL)
{
*head = new_end_node;
}
else
{
list_t *temp_node = *head;
while (temp_node->next != NULL)
{
temp_node = temp_node->next;
}
temp_node = new_end_node;

}
return (new_end_node);
}
