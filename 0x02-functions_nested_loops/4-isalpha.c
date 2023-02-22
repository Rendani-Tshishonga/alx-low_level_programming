#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: Character being checked
 * Return: return 1 if letter lowercase or uppercase else return 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
