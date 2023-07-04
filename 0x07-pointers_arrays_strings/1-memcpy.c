#include "main.h"
/**
 * _memcpy - copies memory area,
 * @dest: pointer to the destination memory area
 * @src: source memory area
 * @n: bytes
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
