#include "main.h"
/**
 *read_textfile - reads a textfile and prints it to output
 *@filename :pointer to the name of the file
 *@letters:number of letters to  read and print
 *Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int my_file;
	ssize_t num_bytes;
	ssize_t num_written;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	my_file = open(filename, O_RDONLY);
	if (my_file == -1)
	{
		return (0);
	}

	buffer = (char *)malloc(letters);
	num_bytes = read(my_file, buffer, letters);

	if (num_bytes == -1)
	{
		return (0);
	}
	num_written = write(STDOUT_FILENO, buffer, num_bytes);

	if (num_written != num_bytes)
	{
	return (0);
	}
	free(buffer);
	close(my_file);
	return (num_bytes);
}
