#include <stdio.h>
#include <string.h>
#include <main.h>
/**
 * main -  prints _putchar, followed by a new line.
 *
 * Return: 0 (code ran succefully)
 */
int main()
{
	char p[] = "_putchar\n";

	for (int a = 0; a < strlen(p); a++)
	{
		_putchar(p[a]);
	}
	return (0);
}
