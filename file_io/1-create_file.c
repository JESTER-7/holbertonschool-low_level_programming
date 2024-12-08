#include "main.h"
/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: string to write in the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	ssize_t b_write;
	size_t len = 0;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (i == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		b_write = write(i, text_content, len);
		if (b_write == -1 || (size_t)b_write != len)
		{
			close(i);
			return (-1);
		}
	}
	close(i);
	return (1);
}
