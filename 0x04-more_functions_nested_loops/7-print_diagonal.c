#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: character
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i < n; i++)
		{
			if (i == 1)
			{
				_putchar(92);
				_putchar('\n');
				break;
			}
			else
			{
				for (j = 1;j < i; j++)
				{
					_putchar(32);
				}
				_putchar(92);
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
