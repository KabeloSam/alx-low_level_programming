#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers - rprints numbers followed by a new line
 *@separator : string to be printed between numbers
 *@n: number of integers passed in the function
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list parameters;
unsigned int x;

va_start(parameters, n);
for (x = 0; x < n; x++)
{
if (separator == NULL)
{
printf("%d", va_arg(parameters, unsigned int));
}
else
{
printf("%d", va_arg(parameters, unsigned int));
if (x != n - 1)
printf("%s", separator);
}
}
printf("\n");
va_end(parameters);
}
