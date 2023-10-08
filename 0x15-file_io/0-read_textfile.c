#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* read_textfile.c - program that read a file and print to POSIX standard output
* @filename: filename(string pointer)
* @letter: number of letters printed
* Return: number of letter on a success
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	unsigned int nread, nwritten;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff =  malloc(sizeof(char) * letters);

	nread = read(fd, buff, letters);
	nwritten = write(STDOUT_FILENO, buff, nread);

	close(fd);
	free(buff);
	return (nwritten);
}
