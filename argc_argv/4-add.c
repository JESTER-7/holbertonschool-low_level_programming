#include "main.h"
/**
 * main - add numbers
 * @argc: arguments
 * @argv: Array of * to arguments
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < 48 || argv[a][b] > 57)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[a]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
