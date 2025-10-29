#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to reverse
 *
 * Description: This function reverses the string in place.
 */
void rev_string(char *s)
{
	int l = 0;
	int i;
	int m;
	char tmp;

	while (s[l] != '\0')
	{
	l++;
	}

	m = l / 2;

	for (i = 0; i < m; i++)
	{
	tmp = s[i];
	s[i] = s[l - 1 - i];
	s[l - 1 - i] = tmp;
	}
}
