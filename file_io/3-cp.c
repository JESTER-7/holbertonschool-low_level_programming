#include "main.h"
/**
 * print_error_and_exit - error message and exit
 * @exit_code: exit code
 * @format: string for the error message
 * @arg: arg for the format string
 */
void print_error_and_exit(int exit_code, const char *format, long arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(exit_code);
}

/**
 * main - cp function
 * @argc: argc
 * @argv: argv
 * Return: 0 or exit
 */
int main(int argc, char *argv[])
{
	int i_from, i_to, b_read, b_write;
	char a[1024];
	mode_t perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to\n", 0);
	i_from = open(argv[1], O_RDONLY);
	if (i_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", (long)argv[1]);
	i_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (i_to == -1)
		print_error_and_exit(99, "Error: Can't write to %s\n", (long)argv[2]);
	while ((b_read = read(i_from, a, sizeof(a))) > 0)
	{
		b_write = write(i_to, a, b_read);
		if (b_write == -1 || b_write != b_read)
			print_error_and_exit(99, "Error: Can't write to %s\n", (long)argv[2]);
	}
	if (b_read == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", (long)argv[1]);
	if (close(i_from) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", i_from);
	if (close(i_to) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", i_to);
	return (0);
}
