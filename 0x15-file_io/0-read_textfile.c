#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file that will be written from
 * @letters: the number of letters that will be red and printed
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes;
	char buffer[BUFFER_SIZE * 8];
	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bytes = read(file, buffer, letters);
	bytes = write(STDOUT_FILENO, buffer, bytes);
	close(file);
	return (bytes);
}
