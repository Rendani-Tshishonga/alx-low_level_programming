#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - a function that reads a file and
 * prints it to the POSIX standard output
 * @filename: the filename to open
 * @letters: the number of letters to read
 * Return: the actual number of letters read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buf;
	ssize_t rd;
	ssize_t wr;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);
	free(buf);
	close(fd);
	return (wr);
}
