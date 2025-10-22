#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c);


int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	_putchar(str[i]);

	return (0);
}
