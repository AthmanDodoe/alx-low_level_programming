#include "main.h"

/**
 * _isalpha - define character
 * @c: the character
 *
 * Return: 1 if is alpha 0 if not
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
