#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of string of argments
 *
 * Return: 0 on succes
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_from, close_to;
	char *file_from, *file_to, buffer[1024];
	ssize_t rlen, wlen;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = argv[1], file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from), exit(98);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	do {
		rlen = read(fd_from, buffer, 1024);
		if (rlen == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from), exit(98);
		wlen = write(fd_to, buffer, rlen);
		if (wlen == -1 || wlen != rlen)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	} while (wlen == 1024);
	close_from = close(fd_from);
	close_to = close(fd_to);
	if (close_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
