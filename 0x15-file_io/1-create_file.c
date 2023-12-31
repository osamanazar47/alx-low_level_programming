#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: the text to be written in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t text, len = strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (len)
	{
		text = write(file, text_content, len);
	}
	close(file);
	return (text == len ? 1 : -1);
}
