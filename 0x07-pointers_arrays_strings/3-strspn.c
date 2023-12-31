#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring.
 * @s: initial segment
 * @accept: Bytes
 * Return: the number of bytes in the initial segment
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	n = 0;
	for (i = 0; *(s + i) != 32; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				n++;
			}
		}
	}
	return (n);
}
