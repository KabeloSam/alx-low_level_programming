#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a : integer argument
 * @b : integer argument
 * Return: returnthe sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - returns the subtraction of a and b
 * @a : integer argument
 * @b : integer argument
 * Return: return the subtraction of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - returns the multiplication of a and b
 * @a : integer argument
 * @b : integer argument
 * Return: return the multiplication of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - returns the division of a and b
 * @a : integer argument
 * @b : integer argument
 * Return: return the division of a and b
 */
int op_div(int a, int b)
{
if (b != 0)
return (a / b);
else
printf("Error\n");
}
/**
 * op_div - returns the remainder of the division of a and b
 * @a : integer argument
 * @b : integer argument
 * Return: return the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
if (b != 0)
return (a % b);
else
printf("Error\n");
}
