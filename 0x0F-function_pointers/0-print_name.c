/**
 *print_name- function that prints a name
 *@name : pointer to name
 *@f : pointer to function
 *Return : Nothing
 */
#include <stdio.h>
#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
if(name == NULL || f == NULL)
return;
else
f(name);
}
