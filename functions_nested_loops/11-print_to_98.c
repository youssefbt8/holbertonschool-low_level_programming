#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line
 * @n: The starting integer
 *
 * Description: Prints numbers separated by a comma and a space,
 * starting from n and ending at 98, in order. Handles both increasing
 * and decreasing sequences.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
	for (i = n; i <= 98; i++)
	{
	printf("%d", i);
	if (i != 98)
	printf(", ");
	}
	}
	else
	{
	for (i = n; i >= 98; i--)
	{
	printf("%d", i);
	if (i != 98)
	printf(", ");
	}
	}
	printf("\n");
}
