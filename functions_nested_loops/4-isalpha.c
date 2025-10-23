#include "main.h"

/**
 * _isalpha - check the code to see if c is an alphabetic character.
 *@c:the character checked by the code.
 * Return: 1 if c is a letter and 0 if else.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
