#include "main.h"
/**
  * read_textfile - reads a text file and prints
  * @filename: The file
  * @letters: Number of letters to reads and prints
  *
  * Return: number of letters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, reader;

	buffer = malloc(sizeof(char *) * letters);

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	reader = read(fd, buffer, letters);

	if (reader == -1)
		return (0);

	write(STDOUT_FILENO, buffer, reader);

	free(buffer);
	close(fd);
	return (reader);
}
