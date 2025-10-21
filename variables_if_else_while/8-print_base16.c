#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;
	
	while (number < 16)
	{
	if (number < 10)
	putchar(number + '0');
	else
	putchar(number + 'a' - 10);
	}
	putchar('\n');
	return (0);
}
