#include "main.h"

/**
 * print_alphabet - Write a function that prints the alphabet, in lowercase.
 *
 * Return: void (code ran succefully
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
