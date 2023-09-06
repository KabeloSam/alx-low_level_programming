#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main- prints results of sum of positive numbers
*@argc:stores number of arguments
*@argv:stores arguments entered
*Return:0
*/

int main(int argc, char *argv[])
{
int a, i;
int sum_of = 0;
if (argc == 1)
{
printf("%d\n", 0);
}
else
{
for (i = 1; i < argc; i++)
{
for (a = 0 ; argv[i][a] != '\0'; a++)
{
if (!(isdigit(argv[i][a])))
{
printf("Error\n");
return (1);
}
}
sum_of = sum_of + atoi(argv[i]);
}
printf("%d\n", sum_of);
}
return (0);
}
