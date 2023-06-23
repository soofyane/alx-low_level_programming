#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: character
 *
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i < n; i++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

