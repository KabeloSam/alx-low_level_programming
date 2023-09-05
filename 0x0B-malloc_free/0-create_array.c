#include "main.h"
/**
*create_array-creates array
*@size: the size of the array
*@c: char that gets initialized
*Return: pointer to the array
*/

char *create_array(unsigned int size, char c)
{
char *my_array = malloc(size * sizeof(char));
if (my_array == 0)
{
return (NULL);
}

if (my_array == NULL)
{
return (NULL);
}

for (unsigned int i = 0; i < size; i++)
{
my_array[i] = c;
}

return (my_array);
}
