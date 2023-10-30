#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file that will be written from
 * @letters: the number of letters that will be red and printed
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	char *buffer;
	char *bytesread;

	if (file == NULL)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesread = fgets(buffer, letters, file);
	if (bytesread == NULL)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	if (write(1, bytesread, strlen(bytesread)) == -1)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (strlen(bytesread));
}
