#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @s:  string
 * @c: Character
 * Return: the pointer to the character in the string s
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; i < sizeof(*s); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else
		{
			return (NULL);
		}
}

