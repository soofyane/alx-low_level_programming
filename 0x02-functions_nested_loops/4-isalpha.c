#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: character in ASCII decimal
 *
 * Return: 1 (letter) 0 (otherwise)
 */

int _isalpha(int c)
{
	if (c >= 60 && c <= 122)
	{
		if (c > 90 && c < 97)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
