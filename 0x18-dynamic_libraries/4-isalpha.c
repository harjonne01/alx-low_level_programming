#include "main.h"
/**
 * _isalpha- function that checks for alphabetic character.
 * @c: char to be checked
 * Return: 1 if char is a letter, lowercase or uppercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

