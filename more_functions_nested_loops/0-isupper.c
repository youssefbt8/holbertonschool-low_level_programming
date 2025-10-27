#include "main.h"
/**
 * isupper - check for uppercase character
 * @c:the character checked by the code
 *
 * Return:1 if c is uppercase, 0 if  else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
