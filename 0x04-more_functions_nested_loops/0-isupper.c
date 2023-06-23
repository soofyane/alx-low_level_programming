#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: Number
 *
 * Return: 1 (c is uppercase) 0 (otherwise)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
