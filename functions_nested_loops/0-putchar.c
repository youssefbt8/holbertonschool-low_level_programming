#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c); /* Prototype for _putchar */


int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	_putchar(str[i]);

	return (0);
}
