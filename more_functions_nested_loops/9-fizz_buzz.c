#include "main.h"
/**
 * main - ooo
 * Return: ooo
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 5 == 0 && a % 3 == 0)
			printf("FizzBuzz ");
		else if (a == 100)
			printf("Buzz");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", a);
	}
	printf("\n");
	return (0);
}
