#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
        char ch = 'a';

        while (ch <= 'z')
        {
        putchar(ch);
        ch++;
        }

	char CH = 'A';

	while (ch <= 'Z')
	{
	putchar(CH);
	CH++;
	}
	
	putchar('\n')
	
	return (0);
}
