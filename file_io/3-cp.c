#include "main.h"
/**
 * main - program to copy
 * @ac: argument count
 * @av: array of arguments
 *
 * Return: a value
 */
int main(int ac, char **av)
{
	int i, j, wrote, readed;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	i = open(av[1], O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	j = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((readed = read(i, buff, 1024)) > 0)
	{
		wrote = write(j, buff, readed);
		if (wrote == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(i) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", i);
		exit(100);
	}
	if (close(j) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", j);
		exit(100);
	}
	return (0);
}
