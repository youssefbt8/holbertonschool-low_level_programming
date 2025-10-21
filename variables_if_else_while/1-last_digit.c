#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;
	int last_digit;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit < 0)
	{
        last_digit = -last_digit;
	}
	printf("Last digit of %d is %d ",n, last_digit);
	if (last_digit > 5)
	{
	printf("and is greater than 5\n");
	}
	else if (last_digit  == 0)
	{
	printf("and is 0\n");
	}
	else
	{
	printf("and is less than 0 and not 6\n");
	}
	return (0);
}
