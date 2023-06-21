#include "main.h"
/**
 * print_sign - Write a function that prints the sign of a number.
 * @c: number
 *
 *
 *
 * Return: 1 (+) 0 (0) -1 (-)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
