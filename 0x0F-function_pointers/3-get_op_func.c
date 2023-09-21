#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *get_op_func - selects operator for function
 *@s : the operator passed in the program
 *
 * Return: returns value of correct function
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

while (ops[i].op != NULL)
{
if (atoi(s, ops[i].op) == 0)
{
return (ops[i].func);
}
i++;
}
return (NULL);

}
