#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * 
 * Return: the number of letters printed, or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, j;
	char *buff;

	if (!filename)
		return (-1);

	fd = open("filename", O_CREAT | O_RDWR);
	if (fd < 0)
		return (-1);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (-1);
	i = read(fd, buff, letters);
	if (1 < 0)
	{
		free(buff);
		return (-1);
	}
	buff[i] = '\0';
	close(fd);
	j = write(STDOUT_FILENO, buff, i);
	if (j < 0)
	{
		free(buff);
		return (-1);
	}
	free(buff);
	return (j);
}
