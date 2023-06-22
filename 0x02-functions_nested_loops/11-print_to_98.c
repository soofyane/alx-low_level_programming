#include "main.h"
/**
 * print_to_98 - Write a function that prints all natural numbers from n to 98, followed by a new line.
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;
	for (i = n; i <=  98; i++)
	{
		if (i != 98)
		{
			_putchar(48 + i);
			_putchar(44);
		}
		else
		{
			_putchar(48 + i);
		}
	}
}
