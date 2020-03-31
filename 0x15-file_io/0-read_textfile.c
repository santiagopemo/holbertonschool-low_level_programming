#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: text file name
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rnum, wnum;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	rnum = read(fd, buf, letters);
	close(fd);
	if (rnum == -1)
	{
		free(buf);
		return (0);
	}
	wnum = write(STDOUT_FILENO, buf, rnum);
	free(buf);
	if (wnum == rnum)
		return (wnum);
	else
		return (0);
}
