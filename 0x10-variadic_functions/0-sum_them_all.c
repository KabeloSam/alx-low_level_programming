#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all - returns sums of all its parameters
 *@n : number of arguments in variadic function
 *Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
va_list paramtrs;
unsigned int x;
int sum;
sum = 0;

va_start(paramtrs, n);
if (n == 0)
{
return (0);
}
for (x = 0; x < n; x++)
{
sum = sum + va_arg(paramtrs, const unsigned int);
}
return (sum);
va_end(paramtrs);
}
