#include "3-calc.h"
/**
 * main - simple operation
 * @argc: number of argument
 * @argv: array int
 * Return: the result
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = operator(n1, n2);
	printf("%d\n", result);
	return (0);
}