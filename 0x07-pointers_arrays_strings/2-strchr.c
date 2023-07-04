#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * @s:  string
 * @c: Character
 * Return: the pointer to the character in the string s
 */
char *_strchr(char *s, char c)
{
	int i;
	
	i = 0;
	while (*s != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		else
		{
			return ('\0');
		}
		s++;
		i++;
	}
}
