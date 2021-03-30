#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to file
 * @text_content: contain the chars
 * Return: 1 or -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
    int i, val;

	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i]; i++)
	{}
	if (filename)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
		{
			return (-1);
		}
		val = write(fd, text_content, i);
		if (val == -1)
			return (-1);
		close(fd);
		return (1);
	}
	return (-1);
}
