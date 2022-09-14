#include "main.h"

/**
 *
 * -isalpha - check for alphabetic character
 *  @c: the character to be checked
 *  Return: 1 if cis a letter, 0 otherwise
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'a' && c <= 'z'));
}
