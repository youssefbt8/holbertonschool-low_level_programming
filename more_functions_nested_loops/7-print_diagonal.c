#include "main.h"
/**
 * print_diagonal -  draws a diagonal line using '\'
 * @n:the number of \ to use
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0 ; i <= n - 1 ; i++)
	{
		for (j = 0 ; j <= i - 1 ; j++)
		{
		putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
}
