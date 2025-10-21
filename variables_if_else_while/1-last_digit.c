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

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	last_digit = n % 10
	printf("the last digit of %d is %d",n,last digit);
	if (last_digit > 5)
	{
	printf("and is greater than 5\n")
	}
	else if (last_digit  == 0)
	{
	printf("and is 0\n");
	else (last_digit < 6 && last digit ! 0)
	{
	printf("and is less than 0 and not 6\n");
	}
	return (0);

