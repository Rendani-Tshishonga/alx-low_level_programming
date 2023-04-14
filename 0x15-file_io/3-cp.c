#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - will create a buffer of 1024
 * @file: the name of the file
 * Return: a buffer to the file
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - close file descriptor
 * @fd: file descriptor to close
 * Return: void
 */
void close_file(int fd)
{
	int cf;

	cf = close(fd);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: The numbe rof arguments
 * @argv: an array of pointers to arguments
 * Return: 0 on success
 * Description: If the argument count is incorrect - exit code 97
 * If file_from does not exist or cannot be read - exit code 98
 * If file_to cannot be created or written to - exit code 99
 * If file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int fd;
	int fd_to;
	int rd;
	int wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fd = open(argv[1], O_RDONLY);
	rd = read(fd, buffer, 1024);
	fd_to = open(argv[2], O_CREAT, O_WRONLY, O_TRUNC, 0664);

	do {
		if (fd == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wr = write(fd_to, buffer, rd);
		if (fd_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rd = read(fd, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY, O_APPEND);
	} while (rd > 0);
	free(buffer);
	close_file(fd);
	close_file(fd_to);
	return (0);
}
