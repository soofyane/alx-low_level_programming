#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i, j, ld;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				ld = j % 10;
				_putchar('1');
				_puthcar(ld + 48);
			}
			else
			{
				_putchar(j + 48);
			}
		}
		_putchar('\n');
	}
}
