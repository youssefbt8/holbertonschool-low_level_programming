#include "main.h"
/**
 * rev_string - reverse a string 
 * @s:the pointer that points to the string
 *
 */
void rev_string(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
	l++;
	}
	int m = l / 2;
	char  tmp;
	int i = 0;
	for (i = 0 ; i < m ; i++)
	{
	tmp = s[i];
	s[i] = s[l - 1 - i]
	s[l - 1 - i] = tmp
	}
}
