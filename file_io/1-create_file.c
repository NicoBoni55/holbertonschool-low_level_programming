#include "main.h"
/**
 * create_file - creates a file
 * @filename: name for file
 * @text_content: text to put into file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, file, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for ( ; text_content[len]; len++)
		{
			file = write(fd, text_content, len);
		}
	}

	if (file == -1)
		return (-1);

	close(fd);
	return (1);
}
