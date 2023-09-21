#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main -tests the program
 *@argc :counts number of arguments in argv
 *@argv : vector of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc != 4)
{
printf("Error\n");
}
int num1;
int num2;
char *operator;
int (*func)(int, int);
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];
(*func)(int, int) = get_op_func(operator);
if (func == NULL)
{
printf("Error\n");
}
printf("%d\n", func(num1, num2));
return (0);
}
