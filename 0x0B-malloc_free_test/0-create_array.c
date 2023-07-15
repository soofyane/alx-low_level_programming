#include <stdio.h>
#include <stlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size - size 
 * @c - Character
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *kacem;
	
	if (size != 0)
	{
		kacem = malloc(size * sizeof(char));
		kacem[0] = c;
		return (*kacem);
	}
	else
	{
		return (NULL);
	}
}
