#include <stdio.h>
#include "main.h"
/**
 * main - prints its name, followed by a new line.
 * @argc: Number of arguments
 * @argv: vector of arguments
 * Return: (0) Ran succefully
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

