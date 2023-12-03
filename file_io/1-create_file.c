#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename to grab
 * @text_content: content to add
 *
 * Return: int value
 */
int create_file(const char *filename, char *text_content)
{
	int i, len = 0;
	long int wrote;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (i == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		wrote = write(i, text_content, len);
		if (wrote == -1)
			return (-1);
	}
	if (close(i) == -1)
		return (-1);
	return (1);
}
