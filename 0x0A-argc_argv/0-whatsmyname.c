#include <stdio.h>
#include "main.h"
/**
 * main - prints its name, followed by a new line.
 * @argc: Number of arguments
 * @argv: vector of arguments
 * Return: (0) Ran succefully
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
