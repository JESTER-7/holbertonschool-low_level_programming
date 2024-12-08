#include "main.h"
/**
 * read_textfile - read a file
 * @filename: filename
 * @letters: number of letters
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
    ssize_t b_read, b_write;
	char *a;

	if (filename == NULL)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	a = malloc(sizeof(char) * letters);
	if (a == NULL)
	{
		close(i);
		return (0);
	}
	b_read = read(i, a, letters);
	if (b_read == -1)
	{
		free(a);
		close(i);
		return (0);
	}
	b_write = write(STDOUT_FILENO, a, b_read);
	if (b_write == -1 || b_write != b_read)
	{
		free(a);
		close(i);
		return (0);
	}
	free(a);
	close(i);
	return (b_write);
}
