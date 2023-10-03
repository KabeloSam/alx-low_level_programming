#include "main.h"
/**
 *create_file - creates a file
 *@filename: name of the file to be created
 *text_content:string to write to the file
 *Return: returns 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int my_file, num_bytes;
	int counter;
	counter = 0;
	my_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	
	if (filename == NULL)
	{
		return (-1);
	}
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
