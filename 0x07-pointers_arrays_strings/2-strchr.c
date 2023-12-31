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

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
