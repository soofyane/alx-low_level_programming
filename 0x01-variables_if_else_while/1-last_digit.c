#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, ldn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldn = n;
	while (ldn > 10)
	{
		ldn = ldn /  10;
	}
	if (ldn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldn);
	}
	else if (ldn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ldn);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldn);
	}
	return (0);
}
