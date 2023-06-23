#include "main.h"
/**
 * _isdigit -  checks for a digit (0 through 9)
 *
 * @c: number
 *
 * Return: 1 (digit) 0 (otherwise)
 */
int _isdigit(int c)
{
	int test;

	test = c / 10;
	if (test < 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
