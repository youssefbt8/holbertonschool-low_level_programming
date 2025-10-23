#include "main.h"

/**
 * print_last_digit - prints the last digit of n
 * @n:the number given
 *
 * Return: the last digit from n.
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld <= 0)
	ld = -ld;

	else
	ld = ld;
	_putchar('0' + ld);
	return (ld);
}
