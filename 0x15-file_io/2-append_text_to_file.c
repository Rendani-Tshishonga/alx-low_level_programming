#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - a function that appends text
 * at the end of a file
 * @filename: a pointer to a file
 * @text_content: a pointer to a Null terminated sting
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wd;
	int count = 0;

	if (filename == NULL && text_content == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	wd = write(fd, text_content, count);
	if (fd == -1 || wd == -1)
		return (-1);
	return (1);
}
