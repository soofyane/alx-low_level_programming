#include <stdio.h>
/**
 * main - The “Fizz-Buzz test”
 *
 *
 * Return: 0 (code ran succefully)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			if ((i % 5) == 0)
			{
				printf("FizzBuzz%c", ' ');
			}
			else
			{
				printf("Fizz%c", ' ');
			}
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz%c", ' ');
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
}
