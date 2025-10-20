#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of integer: %lu byte(s)\n",sizeof(int));
	printf("Size of long int: %lu byte(s)\n",sizeof(long int));
	printf("Size of float: %lu byte(s)\n",sizeof(float));
	printf("Size of char: %lu byte(s)\n",sizeof(char));
	printf("Size of long long int: %lu byte(s)\n",sizeof(long long int));
	return (0);
}
