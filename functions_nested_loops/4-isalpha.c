#include "main.h"

/**
 * _isalpha - check the code to see if c is an alphabetic character.
 *
 * Return: 1 if c is a letter.
 * Return: 0 if c is not a letter.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
