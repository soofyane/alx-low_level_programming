#include <stdio.h>
#include <stlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return:  a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i;
	char *amina;
	if (strlen(str) != NULL)
	{
		*amina = malloc(strlen(str) * sizeof(char));
		for (i = 0; i < strlen(str); i++)
		{
			amina[i] = str[i];
		}
		free(amina);
		return (amina);
	}
	else
	{
		return (NULL);
	}

}
