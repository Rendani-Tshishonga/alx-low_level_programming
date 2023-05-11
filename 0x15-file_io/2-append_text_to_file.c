#include "main.h"
/**
 * append_text_to_file - a function that appends
 * text at the end of a file
 * @filename: the filename
 * @text_content: the text to append to the end of the file
 * Return: 1 on success and -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_APPEND | O_WRONLY);
	wr = write(fd, text_content, len);
	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);
	return (1);
}
