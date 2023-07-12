#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: Number of arguments
 * @argv: vector of arguments
 * Return: (0) Ran succefully. (1) Error
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

