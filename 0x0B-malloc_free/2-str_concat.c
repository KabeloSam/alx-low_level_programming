#include "main.h"
/**
 *str_concat- concatenates two strings
 *@s1:first argument concatenated
 *@s2:second argument to be concatenated
 *Return:a new pointer or null on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;

	new_str = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (new_str == NULL)
	{
		return (NULL);

	}
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	strcat(new_str, s1);
	strcat(new_str, s2);

	return (new_str);
}
