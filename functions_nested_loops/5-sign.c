#include "main.h"

/**
 * print_sign - check the code tell if n is + or is 0 or -.
 *@n:the number to be checked by the code.
 * Return:1 if n is greater than 0,return 0 if it is 0,and -1 if else.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
