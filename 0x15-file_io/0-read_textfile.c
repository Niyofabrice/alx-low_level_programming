#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: 0 or number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t wrt;
	ssize_t rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	rd = read(fd, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	free(buf);
	close(fd);
	return (wrt);
}
