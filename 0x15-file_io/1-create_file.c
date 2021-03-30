#include "holberton.h"
/**
 * create_file - function that creates a file.
 * @filename: pointer to file.
 * @text_content: string.
 * Return: 1 or -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int i;

	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i]; i++)
	{}
	if (filename)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
		if (fd == -1)
		{
			return (-1);
		}
		write(fd, text_content, i);
		close(fd);
		return (1);
	}
	return (-1);
}
