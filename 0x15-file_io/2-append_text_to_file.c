#include "main.h"
/**
 *append_text_to_file -appends text at the end of a file
 *@filename:name of the file
 *@text_content : string to write to the file
 *Return: returns 0 on success ,-1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int my_file, num_bytes, counter = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	my_file = open(filename, O_WRONLY | O_APPEND);
	if (my_file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
	while (text_content[counter] != '\0')
	{
		counter++;
	}
	num_bytes = write(my_file, text_content, counter);
	if (num_bytes == -1)
	{
		return (-1);
	}
	}
	close(my_file);
	return (1);


}
