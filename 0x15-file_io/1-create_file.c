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
	ssize_t text;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (strlen(text_content))
	{
		text = write(file, text_content, strlen(text_content));
		if (strlen(text_content) == 0 || text == strlen(text_content))
		{
			close(file);
			return (1);
		}
	}
	close(file);
	return (-1);
}
