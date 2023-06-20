#include "main.h"

/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int a, size;

	size = sizeof(p) / sizeof(int);
	for (a = 0; a < size; a++)
	{
		_putchar(p[a]);
	}
	_putchar('\n');
	return (0);
}
