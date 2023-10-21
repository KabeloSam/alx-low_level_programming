#include "main.h"
/**
 *_strdup- duplicates string
 *@str : string to be duplicated
 *Return: a pointer to the duplicated string or null if failed
 */
char *_strdup(char *str)
{
	char *new_str;

	new_str = malloc(sizeof(char) * (strlen(str) + 1));

	if (new_str == NULL)
	{
	return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);

	return (new_str);


}
