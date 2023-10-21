#include "main.h"
/**
*create_array-creates array
*@size: the size of the array
*@c: char that gets initialized
*Return: pointer to the array, null if size is 0 or null if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i;

	my_array = malloc(sizeof(char) * size);
	if (size == 0 || my_array == NULL)

		return (NULL);


	for (i = 0; i < size; i++)

		my_array[i] = c;


	return (my_array);
}
