#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check  for numeric characters
 * @c: the character to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	return (0);
}
