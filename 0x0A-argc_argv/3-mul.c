#include <stdio.h>
#include <stdlib.h>
/**
*main- prints results of multiplication of two numbers
*@argc:stores number of arguments
*@argv:stores arguments entered
*Return:0
*/

int main(int argc, char *argv[])
{
int num1, num2, multi_of;
int counter_arg = argc;
if (counter_arg != 3)
{
printf("Error\n");
return (1);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

multi_of = num1 *num2;
printf("%d\n", multi_of);
}
return (0);
}
