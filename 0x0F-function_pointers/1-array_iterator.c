#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - executes a given function
 *@array: pointer to array of intergers
 *@size : size of the array
 *@action : pointer to void function that takes an integer argument
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
