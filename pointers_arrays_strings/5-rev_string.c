#include "main.h"
/**
 * rev_string - reverse a string 
 * @s:the pointer that points to the string
 *
 */
void rev_string(char *s)
{
	int l = 0;
	int m = l / 2;
	int i = 0;
	char tmp;
	while (s[l] != '\0')
	{
	l++;
	}
	for (i = 0 ; i < m ; i++)
	{
	tmp = s[i];
	s[i] = s[l - 1 - i];
	s[l - 1 - i] = tmp;
	}
}
