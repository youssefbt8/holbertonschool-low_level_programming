#include "main.h"
/**
 *puts_half - prints the second half of a string
 *@str:pointer to the string
 *
 *
 */
void puts_half(char *str)
{
	int l = 0;
	int start;

	while (str[l] != '\0')
	{
	l++;
	}
	if (l % 2 == 0)
	start = l / 2;
	else
	start = ((l - 1) / 2) + 1;
	while (str[start] != '\0')
	{
	_putchar(str[start]);
	start++;
	}
	_putchar('\n');
}
