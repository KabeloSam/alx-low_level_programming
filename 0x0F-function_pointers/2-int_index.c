#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array : array of integers
 * @size : number of elements in array
 * @cmp : pointer to fnction to be used to compare values
 *
 * Return: return -1 if false,something else otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);

if (array != NULL && cmp != 0)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 1)
{
return (i);
}
}
}
return (-1);
}
