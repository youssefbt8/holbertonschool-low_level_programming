#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of integer: %lu",sizeof(int));
	printf("Size of long int: %lu",sizeof(long int));
	printf("Size of float: %lu",sizeof(float));
	printf("Size of char: %lu",sizeof(char));
	printf("Size of long long int: %lu",sizeof(long long int));
	return (0);
}
