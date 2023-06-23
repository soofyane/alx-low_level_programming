#include "main.h"
/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9, Do not print 2 and 4
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');

}
