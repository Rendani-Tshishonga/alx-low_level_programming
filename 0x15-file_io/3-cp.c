#include "main.h"
/**
 * buffer - allocates 1024 bytes for a buffer
 * @file: the name of the file to allocate memory to
 * Return: a pointer to the newly allocated string
 */
char *buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Cant write to file %s\n", file);
		exit(99);
	}
	return (buf);
}
/**
 * close_fd - close file descriptors
 * @fd: the file descriptor to be closed
 * Return: void
 */
void close_fd(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: An array of arguments to the pointers
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int rd;
	int wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: file_from file_to\n");
		exit(97);
	}
	buf = buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	rd = read(file_from, buf, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		wr = write(file_to, buf, rd);
		if (file_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant write to file %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		rd = read(file_from, buf, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buf);
	close_fd(file_from);
	close_fd(file_to);
	return (0);
}
