#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - ooo
 * Return: 0
 */
int main(void)
{
	int n;
	int i;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i < 5 )
	{
		printf("Last digit of %d is %d and is less than 5\n", n, i);
	}
	else if (i > 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, i);
	}
	return (0);
}
