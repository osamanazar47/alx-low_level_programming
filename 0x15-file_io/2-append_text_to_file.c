#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text content
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, text, append;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (!text_content)
	{
		close(file);
		return (1);
	}
	text = write(file, text_content, strlen(text_content));
	append = (text != -1) ? 1 : -1;
	close(file);
	return (append);
}
