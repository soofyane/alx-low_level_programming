#include "main.h"
/**
 * _islower -  Write a function that checks for lowercase character.
 * @c: character in ASCII decimal
 *
 * Return: 1 (lowercase) 0 (not lowercase)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
