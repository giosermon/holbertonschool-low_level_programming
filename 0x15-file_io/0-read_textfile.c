#include "holberton.h"

/**
 * read_textfile - main function
 * @filename: The pointer name of the file.
 * @letters: The characters there are in the file.
 *
 * Description: This function reads a text file and prints it to the
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, num_let;
	
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			return (0);
		}
		num_let = read(fd, buf, letters);
		close(fd);
		write(STDOUT_FILENO, buf, num_let);
		if (num_let == -1)
			return (0);
		return (num_let);
	}
	return (0);
}
