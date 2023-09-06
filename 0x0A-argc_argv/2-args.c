#include <stdio.h>
/**
*main-prints all arguments it receives
*@argc:stores number of arguments
*@argv:stores arguments entered
*Return:0
*/

int main(int argc, char *argv[])
{
int i;
int counter_arg = argc;

for (i = 0 ; i < counter_arg ; i++)
printf("%s\n", argv[i]);
return (0);
}
