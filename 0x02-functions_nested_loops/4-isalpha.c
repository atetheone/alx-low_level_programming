#include "main.h"

/**
 * _isalpha - check if a character is a letter
 * @c: is an ascii character
 * Return: 1 if the character is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
