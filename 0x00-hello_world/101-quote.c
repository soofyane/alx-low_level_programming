#include <unistd.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char char1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, char1, strlen(char1));
	return (1);
}
