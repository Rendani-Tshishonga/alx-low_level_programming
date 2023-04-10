#include "main.h"
#include <stdlib.h>
/**
 * create_file - a function that creates a file
 * @filename: the file to create
 * @text_content: is NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int wd;
	int count = 0;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		count++;
	wd = write(fd, text_content, count);
	if (fd == -1 || wd == -1)
		return (-1);
	close(fd);
	return (1);
}
