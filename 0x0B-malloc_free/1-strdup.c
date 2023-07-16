#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return:  a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *amina;

	if (str != NULL)
	{
		amina = malloc(sizeof(*str) * sizeof(char));
		for (i = 0; i < strlen(str); i++)
		{
			amina[i] = str[i];
		}
		return (amina);
	}
	else
	{
		return (NULL);
	}

}
