#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 *
 * Description: Uses the character '#' to print the triangle.
 * If size is 0 or less, prints only a new line.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
