#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
* error_exit - Copies the content of one file to another
* @message: Number of arguments
* @code: Array of argument strings
* @file: Array of argument strings
*
* Return: 0 on success, exits with specific codes on failure
*/
void error_exit(const char *message, int code, const char *file)
{
	dprintf(STDERR_FILENO, message, file);
	exit(code);
}

/**
* main - Copies the content of one file to another
* @argc: Number of arguments
* @argv: Array of argument strings
*
* Return: 0 on success, exits with specific codes on failure
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;

	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit("Usage: cp file_from file_to\n", 97, NULL);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file %s\n", 98, argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit("Error: Can't write to %s\n", 99, argv[2]);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error_exit("Error: Can't write to %s\n", 99, argv[2]);
	}

	if (bytes_read == -1)
		error_exit("Error: Can't read from file %s\n", 98, argv[1]);

	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd %d\n", 100, argv[1]);
	if (close(fd_to) == -1)
		error_exit("Error: Can't close fd %d\n", 100, argv[2]);

	return (0);
}
