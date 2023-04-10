#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - a function that reads  a textfile
 * and print it to POSIX standard output
 * @filename: the pointer to the address of the filename
 * to read data from
 * @letters: the number of letters it should read and print
 * Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t rd;
	ssize_t wd;

	fd = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);
	if (fd == -1 && filename == NULL)
		return (0);
	rd = read(fd, buffer, letters);
	wd = write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	close(fd);
	return (wd);
}
